//
// Created by Utente on 18/03/2022.
//

#ifndef LOGOUT_H
#define LOGOUT_H

#include <string>
#include <vector>
#include "Paypal.h"
#include "Carta.h"
#include "Oggetto.h"
#include"Account.h"
class Logout {
    public:
        Logout();
        void pagamento(int , vector<Oggetto*> & , Account *);
        void email(int, vector<Oggetto*> & , Account *);
        void getaddress ();

    private:
        string metpag;
        string address;
        string Data;
        string Via;
        string Numerocivico;
        string Paese;



};


#endif
