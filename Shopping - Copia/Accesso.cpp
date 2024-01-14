 #include <iostream>
#include<fstream>
#include <conio.h>

#include "Accesso.h"
using namespace std;



Accesso::Accesso(int *UNO,int *GLOBAL) {

    int check = 0;

    int i = 1;

    string cmail;
    string cpassword;
    string cname;
    string csurname;
    string cispedizione;
    do {
        cout << "Inserisci la mail e la password, premendo invio" << endl;
        cin >> mail;
        int j =0;
        char c;
        char pw[100]={0};
        do{
            pw[j]=getch();
            if (password[j]!=13){
                j++;
            }
        }while(pw[j-1]!=13);
        //string a(pw);
        string a;
        cin>>a;
        password = a;

        fstream file;
        file.open("Utenti.txt", ios::in);
        string riga;

        if (file.is_open()) {
            while (file) {
                getline(file, riga);
                cmail = riga;

                if (mail == cmail) {
                    getline(file, riga);
                    cpassword = riga;
                    if (cpassword == password) {
                        getline(file, riga);
                        name = riga;
                        getline(file, riga);
                        surname = riga;
                        getline(file, riga);
                        ispedizione = riga;
                        check = 1;
                        *UNO = i;}
                }
                i = i + 1;
            }
        }
        file.close();

        if (check == 0)
            cout << "Mail o password errati!" << endl;
    } while (check == 0);
    *GLOBAL = 1;
    cout << "login effettuato!" << endl;
    char t;
    cin>>t;
    system("cls");
}

string Accesso::getName() const {
    return name;
}
string Accesso::getSurname() const {
    return surname;
}
string Accesso::getEmail() const {
    return mail;
}
string Accesso::getIspedizione() const {
    return ispedizione;
}