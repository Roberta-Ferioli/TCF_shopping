#include "Logout.h"
#include <iostream>
#include <string>
#include"Account.h"
#include "Paypal.h"
#include "Carta.h"
#include <sstream>
#include <conio.h>

using namespace std;

Logout::Logout(){
    metpag = " ";
    address = " ";
    Data = " ";


}
void Logout::pagamento(int z, vector<Oggetto*> &v4, Account *account){
    cout << "E' possibile effettuare il pagamento tramite carta, carta prepagata o Paypal" << endl;
    cout << "Digita 'C' per procedere con la carta" << endl;
    cout << "Digita 'P' per procedere con PayPal" << endl;
    cin >> metpag;
    int c=0;
    do {
        if(c>0){
            cout << "Carattere non valido! Digita nuovamente" << endl;
            cin >> metpag;}
        c++;
    } while (metpag != "C" && metpag != "P");
    if (metpag == "C") {
        Carta carta;
        Data = carta.getData();

    }
    if (metpag == "P"){
        Paypal paypal;
        Data = paypal.getData();

    }


}

void Logout::getaddress(){
    string h;
    cout<<"Via/Piazza/Corso:"<<endl;
    cin>>Via;
    cout<<"numero civico:"<<endl;
    cin>>Numerocivico;
    cout<<"Comune:"<<endl;
    cin>>Paese;
    //getline(cin,h);
    //address = h;
    //fflush(stdin);
    //cout<<address<<endl;
    system("cls");
}
void Logout::email(int z, vector<Oggetto*> &v4, Account *account){

    if (metpag == "C") {
        cout << "Gentile " << account->getName() << " " << account->getSurname() << "," << endl;
        cout << endl;
        cout << "Tramite questa mail vogliamo confermarle l'ordine dei seguenti articoli:"
             << endl;   //prova a mandarla davvero, sfrutta getmail!!! da account
        for ( int i = 0; i < v4.size(); i++) {
            {
                v4[i]->stampaog();
                cout<<endl;
            }
        }
        //	cout << v1[i].getname << " " << v1[i].getcolore << " di taglia " << v1[i].gettaglia << endl;}

        cout << "Per un totale di "<<z << "$, che sara' addebitato sulla carta con data di scadenza " << Data << "." << endl;
        cout << "Gli articoli saranno spediti all'indirizzo di consegna: Via/Piazza "<<Via<<" "<<Numerocivico<<", "<<Paese<<". "<< endl;
//la somma il puntatore non funzia
    }
    if (metpag == "P"){
        cout << "Gentile " << account->getName() << " " << account->getSurname() << "," << endl;
        cout << endl;
        cout << "Tramite questa mail vogliamo confermarle l'ordine dei seguenti articoli:" << endl;   //prova a mandarla davvero, sfrutta getmail!!!
        for (int i = 0; i < v4.size(); i++) {
            v4[i]->stampaog();
            cout<<endl;
        }
        cout << "Per un totale di " <<z<< "$ che sara' addebitato sul conto Paypal relativo all'username " << Data << "." << endl;
        cout << "Gli articoli saranno spediti all'indirizzo di consegna: Via/Piazza/Corso "<<Via<<" "<<Numerocivico<<", "<<Paese<<". "<< endl;


    }
    getch();
}