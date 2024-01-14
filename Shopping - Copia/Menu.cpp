#include <iostream>
#include <string>
#include <vector>
using namespace std;

#include "Categorie.h"
#include "Maglie.h"
#include "Pantaloni.h"
#include "Menu.h"
#include "Menusel.h"
#include "carrello.h"

Menu::Menu(){
    ma = new Maglie;
    pa = new Pantaloni;
    lista = new Categorie;
}
/*vector<Oggetto*> Menu::spesa() {
    int risposta;
    Menusel men;
    Oggetto* ogge;
    vector<string> vettore{"Intero catalogo", "Per categoria"};
    string r="c";
    while((r=="C")||r=="c") {
        risposta = men.sel(vettore, " Vuole vedere l'intero catalogo o sfogliarlo per categoria?");
        system("cls");
        if (risposta == 0) {
            ogge=tutto();
            if(ogge!=NULL) {
                v3.push_back(ogge);
                ogge->stampaog(); //stampa vuota qui
                cout<<endl;
                //cout<<"e fino a qui ci siamo"<<endl;
            }
        }
        else {
            ogge = parte();
            if (ogge != NULL) {
                v3.push_back(ogge);
                //ogge è l'indirizzo di memoria

            }
        }
        cout << "Premere c per continuare o t per terminare gli acquisti" << endl;
        cin >> r;
        while((r!="C") and (r!="c") and (r!="T") and (r!="t"))
        {
          cout<<"carattere non valido inserire di nuovo"<<endl;
          cin>>r;
        }
    }
    return v3;
}*/
Oggetto* Menu::tutto()const{
    int risp;
    bool scelta;
    Menusel men;

    risp = men.sel(lista->Elenco()," Selezionare un prodotto tra i seguenti per vedere i dettagli: ");   //mostra gli elementi di quella categoria
    system("cls");

    scelta= lista->Selezione(risp);
    //mostra le caratteristiche dell'oggetto scelto e chiede se vuole aggiungerlo al carrello
    system("cls");

if(scelta==true)
{
    return lista->getprod(risp);
}
   else return NULL;
}

Oggetto * Menu::parte() const{// modificato il tipo era void prima
    vector <Catalogo *> vet {pa,ma}; //creo un vettore con le varie categorie
    vector <string> vettore;

    bool scelta;
    int risp1;
    int risp2;
    Menusel men;

    for (int i= 0; i <vet.size(); i++){
        vettore.push_back( vet[i]->Nome());
    }
    risp1 = men.sel(vettore,"Le categorie sono le seguenti, selezionarne una: ");
        system ("cls");

        risp2= men.sel(vet[risp1]->Elenco()," Selezionare un prodotto tra i seguenti prodotti per vedere i dettagli: ");   //mostra gli elementi di quella categoria
        system ("cls");
        scelta= vet[risp1]->Selezione(risp2);   //mostra le caratteristiche dell'oggetto scelto e chiede se vuole aggiungerlo al carrello
        system("cls");
        if(scelta==true)
        {
            return vet[risp1]->getprod(risp2);
        }
        else
        {
            return NULL;
        }

}

