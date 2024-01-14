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
using namespace std;
 Listaprod::Listaprod()
 {

 }
 void Listaprod::aggiungi() {
     int rispo;
     Menusel men;
     Oggetto *ogge;
     vector<string> vettore{"Intero catalogo", "Per categoria"};
     string r = "c";
     while ((r == "C") || r == "c") {
         rispo = men.sel(vettore, " Vuoi vedere l'intero catalogo o sfogliarlo per categoria?");
         system("cls");
         if (rispo == 0) {
             ogge = m.tutto();


             if (ogge != NULL) {
                 cout<<"In che quantita' aggiungere al carrello?"<<endl;
                 int y;
                 cin>>y;
                 for(int i=0;i<y;i++)
                 {
                     listap.push_back(ogge);
                 }

             }
         } else {
             ogge = m.parte();

             if (ogge != NULL) {
                 cout<<"In che quantita' aggiungere al carrello?"<<endl;
                 int y;
                 cin>>y;
                 for(int i=0;i<y;i++)
                 {
                     listap.push_back(ogge);
                 }
             }
         }
         cout << "Premere c per continuare o t per terminare gli acquisti" << endl;
         cin >> r;
         while ((r != "C") and (r != "c") and (r != "T") and (r != "t")) {
             cout << "carattere non valido inserire di nuovo" << endl;
             cin >> r;
         }
     }
 }

vector<Oggetto *> Listaprod::getlistap()
{
    return listap;
}