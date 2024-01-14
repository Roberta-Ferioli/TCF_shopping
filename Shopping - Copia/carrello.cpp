#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cstring>
using namespace std;

#include "Categorie.h"
#include "Maglie.h"
#include "Pantaloni.h"
#include "Oggetto.h"
#include "carrello.h"
carrello::carrello(vector<Oggetto*>& v4) {
    //cout<<"siamo nel carrello"<<endl; stampe di controllo
    //cout<<"lunghezza carrello 2: "<<v4.size()<<endl;


    for (int j = 0; j < v4.size(); j++) {
        string d;
        carr.push_back(v4[j]);
        d=v4[j]->getprezzo();
        int b;
        b=stoi(d);
        prezzi.push_back(b);
        s=s+b;
    }
    //cin>>s; fino a qui arriva
}


void carrello::stampa(){//la funzione la chiama, ma è prima il problema

    for(int j=0;j<carr.size();j++)
    {
        string d;
        cout<<"prodotto n "<<j+1<<":"<<endl;
        carr[j]->stampaog();//questo impazzisce
        cout<<endl;

    }
}
int carrello::rimuovi() {
    int a,b,c,x;
    x=3;
    c = carr.size();
    cout << "1-conferma" << endl;
    cout << "2-elimina un elemento dal carrello" << endl;
    cin >> b;
    while (b =
            = 2) {
        cout << "digita l'elemento che vuoi rimuovere dal carrello" << endl;
        cin >> a;
        while (a > carr.size() ) {
            cout << "nessun elemento del carrello corrisponde a " << a << " , inserire un valore valido" << endl;
            cin >> a;
        }
        if (c > 1) {
            carr.erase(carr.begin() + (a - 1));
            s=s-prezzi[a-1];
            system("cls");
            stampa();
            cout << "1-conferma ordine" << endl;
            cout << "2-elimina un altro elemento" << endl;
            cin >> b;
            c--;
        } else {
            if (c == 1) {
                cout << "Attenzione. Nel carrello e' rimasto un unico elemento. Proseguire? " << endl;
                cout << "1-lascia l'ultimo elemento" << endl;
                cout << "2-elimina ultimo elemento" << endl;
                if (b == 2){
                    cin >> b;
                    a = 1;
                    carr.erase(carr.begin() + (a - 1));
                    prezzi.erase(prezzi.begin() + (a - 1));
                    cout<<"Sicuro di non voler acquistare nulla?"<<endl;
                    cout<<"1-Non acquistare nulla"<<endl;
                    cout<<"2-Torna indietro e aggiungi altri elementi"<<endl;
                    cin>>x;
                    b=1;
                }
            }
            if(c==0) {
                cout << "carrello vuoto, non è possibile rimuovere altri elementi" << endl;
            }
        }

    }
    return x;
}
int carrello::somma(){
    return s;
}
vector<Oggetto *> carrello::getcarrello()
{
    return carr;
}
