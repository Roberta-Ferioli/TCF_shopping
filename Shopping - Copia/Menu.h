#ifndef MENU_H
#define MENU_H

#include <string>
#include "Catalogo.h"
#include "Categorie.h"
#include "Maglie.h"
#include "Pantaloni.h"
#include "carrello.h"
#include "Oggetto.h"
using namespace std;


class Menu{

public:
    Menu();

    Oggetto* tutto() const;
    Oggetto* parte() const;



private:
    Catalogo *ma;
    Catalogo *pa;
    Catalogo *lista;

    int som;
    //vector<Oggetto*> v3;
};



#endif