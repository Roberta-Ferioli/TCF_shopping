#ifndef METPAGAMENTO_H
#define METPAGAMENTO_H

#include <string>
#include <iostream>
#include "Oggetto.h"
#include <vector>
using namespace std;




#include "Account.h"

class Metpagamento {

public:
    virtual string getData() const =0;

};

#endif