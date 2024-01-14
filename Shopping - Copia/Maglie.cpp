#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

#include "Maglie.h"
#include "Oggetto.h"
#include "Menusel.h"
#include "carrello.h"


Maglie::Maglie (){
    nome = " Maglie";
    fstream file;
    file.open("Maglie.txt");
    string maglie;
    if ( file.is_open() ) {
        for (int i=0; file; i++){
            getline (file, maglie);
            if (i%6==0){
                prodotti.push_back(maglie);
                //cout<<maglie<<" "<<i<<endl;    //STAMPA UNA RIGA DI TROPPO, la stampa è di controllo poi va tolta
            }

        }
        file.close();
    }
}

vector <string> Maglie::Elenco() const{     //Ti stampa l'elenco delle maglie
    return prodotti;
}
bool Maglie::Selezione( int s) const{     //Dato il numero associato alla maglia che hai scelto ti stampa le caratteristiche
    fstream file;  //se metto const non è definito push_back
    file.open("Maglie.txt");
    string maglie;

    if (file.is_open()) {
        for (int i = 0; file; i++){
            getline(file, maglie);
            if (i >= (s)*6 && i < (s)*6+4) {
                cout << maglie << endl;            //STAMPA UNA RIGA DI TROPPO, la stampa è di controllo poi va tolta
            }
            if(i== (s)*6+4){
                cout<< maglie<<"$"<<endl;
            }
        }
        file.close();
    }

    cout << " Aggiungere al carrello? No vuol dire tornare indietro" << endl << "S/N" << endl;
    string risp;
    cin >> risp;
    while(risp!="n" and risp!="N" and risp!="s" and risp!="S")
    {
        cout<<"non valido inserire di nuovo"<<endl;
        cin>>risp;
    }
    if (risp == "n" || risp == "N") {
        ;
         return false;
    }
    if (risp == "s" || risp == "S") {
       //con true crea l'oggetto e lo aggiunge al carrello
        system("cls");
        //Oggetto * og = new Oggetto ("Maglie.txt",s);
        //ogg=og;
        return true;
    }
}
    ;
        string Maglie::Nome () const{
    return nome;
}
Oggetto* Maglie::getprod(int s) const
{
    fstream file;
    file.open("Maglie.txt");
    string maglie;
    vector<Oggetto*> v2;
    if (file.is_open()) {
        for (int i = 0; file; i++){
            getline(file, maglie);
            //if (i >= (s)*6 && i <= (s)*6+5) {
                //cout << maglie << endl;            //STAMPA UNA RIGA DI TROPPO, la stampa è di controllo poi va tolta
            //}
        }
        file.close();
    }
    v2.push_back(new Oggetto ("Maglie.txt",s));
    return v2.back();
}




