#ifndef MAGLIE_H
#define MAGLIE_H


#include <string>
#include <vector>
using namespace std;

#include "Catalogo.h"
#include "Oggetto.h"
#include "carrello.h"
class Maglie: public Catalogo{

public:
    Maglie();
    virtual vector <string> Elenco() const;
    virtual bool Selezione(int) const ;
    virtual string Nome () const;
    virtual Oggetto* getprod(int) const ;
private:
    vector <string> prodotti;  //prendere magari in input il numero di prodotti?
    string nome;
    //vector<Oggetto* > vet2;
    //carrello carrem;
};

#endif
