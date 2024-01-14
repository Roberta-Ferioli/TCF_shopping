#include <iostream>
#include <string>

using namespace std;


#include "Carta.h"
#include "Accesso.h"
#include "Account.h"
#include "Oggetto.h"
#include <vector>


Carta::Carta() {
    cout << "Inserire numero della carta, data di scadenza(MM/AA) e codice, premendo invio" << endl;
    cin >> numerocarta;
    cin >> datascadenza;
    cin >> codice;

    char Ch[255];
    strcpy_s(Ch, numerocarta.c_str());
    int p;
    p = strlen(Ch);
    int u = 0;
    do {
        if (u > 0) {
            cout << " numero della carta inserito non corretto! Inserirlo nuovamente" << endl;
            cin >> numerocarta;
            strcpy_s(Ch, numerocarta.c_str());
            p = strlen(Ch);
        }
        u++;
    }while (p<13 || p>16);

    char CH[255];
    strcpy_s(CH, datascadenza.c_str());
    int t;
    t = strlen(CH);
    int r = 0;
    do {
        if (r > 0) {
            cout << " data di scadenza inserita non corretta! Inserirla nuovamente" << endl;
            cin >> datascadenza;
            strcpy_s(CH, datascadenza.c_str());
            t = strlen(CH);
        }
        r++;
    }while (t!=5);

    char ch[255];
    strcpy_s(ch, codice.c_str());
    int c;
    c = strlen(ch);
    int b = 0;
    do {
        if (b > 0) {
            cout << " codice inserito non corretto! Inserirlo nuovamente" << endl;
            cin >> codice;
            strcpy_s(ch, codice.c_str());
            c = strlen(ch);
        }
        b++;
    }while (c != 3);

}
string Carta::getData() const
{
    return datascadenza;
}


