#include <iostream>
#include <string>
using namespace std;


#include "Paypal.h"
#include "Account.h"
#include "Oggetto.h"
#include <vector>

Paypal::Paypal() {
    cout << "Inserire email e password di Paypal, premendo invio" << endl;
    cin >> emailpp;
    cin >> passwordpp;
}

string Paypal::getData() const
{
    return emailpp;
}

