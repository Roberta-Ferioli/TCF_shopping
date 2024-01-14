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
using namespace std;

#ifndef TCF3_MAINN_LISTAPROD_H
#define TCF3_MAINN_LISTAPROD_H


class Listaprod {
public:
    Listaprod();
    void aggiungi();
    vector<Oggetto*> getlistap();
private:
    Menu m;
    vector<Oggetto*> listap;

};


#endif //TCF3_MAINN_LISTAPROD_H
