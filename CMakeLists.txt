cmake_minimum_required(VERSION 3.21)
project(tcf3_mainn)

set(CMAKE_CXX_STANDARD 14)

include_directories("Shopping - Copia")

add_executable(tcf3_mainn
        "Shopping - Copia/Accesso.cpp"
        "Shopping - Copia/Accesso.h"
        "Shopping - Copia/Account.cpp"
        "Shopping - Copia/Account.h"
        "Shopping - Copia/carrello.cpp"
        "Shopping - Copia/carrello.h"
        "Shopping - Copia/Carta.cpp"
        "Shopping - Copia/Carta.h"
        "Shopping - Copia/Catalogo.h"
        "Shopping - Copia/Categorie.cpp"
        "Shopping - Copia/Categorie.h"
        "Shopping - Copia/Maglie.cpp"
        "Shopping - Copia/Maglie.h"
        "Shopping - Copia/main.cpp"
        "Shopping - Copia/Menu.cpp"
        "Shopping - Copia/Menu.h"
        "Shopping - Copia/Menusel.cpp"
        "Shopping - Copia/Menusel.h"
        "Shopping - Copia/Metpagamento.h"
        "Shopping - Copia/Oggetto.cpp"
        "Shopping - Copia/Oggetto.h"
        "Shopping - Copia/Pantaloni.cpp"
        "Shopping - Copia/Pantaloni.h"
        "Shopping - Copia/Paypal.cpp"
        "Shopping - Copia/Paypal.h"
        "Shopping - Copia/Registrazione.cpp"
        "Shopping - Copia/Registrazione.h"
        "Shopping - Copia/Listaprod.cpp"
        "Shopping - Copia/Listaprod.h"
        "Shopping - Copia/Logout.cpp"
        "Shopping - Copia/Logout.h"
)