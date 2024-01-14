#include <iostream>
#include <string>
#include <vector>

#include "Menu.h"
#include "Registrazione.h"
#include "Accesso.h"
#include "Carta.h"
#include "Paypal.h"
#include "Account.h"
#include "Menusel.h"
#include "carrello.h"
#include "Oggetto.h"
#include "Listaprod.h"
#include "Logout.h"
using namespace std;

int main() {

    //variabile usata per salvare le risposte dell'utente
    int global = 0;
    int aiuto = 0;
    string azione1=" ";
    string azione2=" ";
    int uno;
    int due;
    int ww;
    int z;


    cout << "Benvenuto nel negozio online!" << endl;
    cout << endl;
    cout << "Digita 'A' per accedere" << endl;
        cout << "Nuovo cliente? Digita 'R' per registrarti" << endl;
        cout << "Digita 'C' per sfogliare il catalogo " << endl;
        cin >> azione1;
        system("cls");

        while (azione1 != "A" and azione1 != "R" and azione1 != "C") {
            cout << "Carattere non valido! Digita nuovamente" << endl;
            cin >> azione1;
            system("cls");
        }

        if (azione1 == "A") {
            Accesso accesso(&uno, &global);
        }
        if (azione1 == "R") {
            Registrazione registrazione(&uno, &global);
        }

        Listaprod l;
        vector<Oggetto *> v4;
        l.aggiungi();
        v4 = l.getlistap();
        carrello carre(v4);
        system("cls");
        carre.stampa();
        ww = carre.rimuovi();
        if (ww == 1) {
            cout
                    << "Ci dispiace tu non abbia acquistato nulla, speriamo che i nostri prodotti ti ispirino di più la prossima volta. "
                    << endl;
            cout << "Lo staff ti augura una buona giornata" << endl;
            return 0;
        }
        if (ww == 2) {
            Listaprod l1;
            for (int i = 0; i < v4.size(); i++) {
                v4.erase(v4.begin() + (i));
            }
            l1.aggiungi();
            v4 = l1.getlistap();
            carrello carrel(v4);
            carrel.stampa();
            ww = carrel.rimuovi();
            z = carrel.somma();
            cout << "Totale=" << z << "$" << endl;
            v4 = carrel.getcarrello();
         ww=4;
            }
        if (ww == 3) {
            system("cls");
            z = carre.somma();
            system("cls");
            cout << "Totale=" << z << "$" << endl;
            v4 = carre.getcarrello();
        }
        system("cls");
        if (global == 0) {
            aiuto = 1;
            cout << "Per procedere con il pagamento, ti invitiamo ad accedere o registrarti!" << endl;
            cout << "Digita 'A' per accedere" << endl;
            cout << "Nuovo cliente? Digita 'R' per registrarti" << endl;
            cin >> azione2;

            int b = 0;
            do {
                if (b > 0) {
                    cout << "Carattere non valido! Digita nuovamente" << endl;
                    cin >> azione2;
                }
                b++;
            } while (azione2 != "A" and azione2 != "R");
            if (azione2 == "A")
                Accesso accesso(&uno, &global);
            if (azione2 == "R")
                Registrazione registrazione(&uno, &global);
        }

        Account account(&uno, &global, &azione1, &azione2);
        Logout Lg;

        Lg.pagamento(z, v4, &account);

        Lg.getaddress();
        Lg.email(z, v4, &account);
        cout<<"Desideri uscire?"<<endl;





    return 0;
}