// juli3007.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string nombres[10];

    for (int i = 0;i < 10;i++) {
        cout << "Cual es el nombre del "<<i <<" de la fila" << endl;
        cin >> nombres[i];
    }
    for (int i = 0;i < 10;i++) {
        cout << "Los nombres de todos en la fila es: " << nombres[i] << endl;
        if (i==4 && nombres[i] == "carlos") {
            cout << " Tu eres el que acabo de robar" << endl;
        }
    }
    
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración
