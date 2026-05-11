#include <iostream>
using namespace std;
int main ()
{
    int opcion;

    while (opcion !=4) 
    {
        cout << "Ingresa un numero de estas opciones: " << endl;
        cout << "1. Opcion 1" << endl;
        cout << "2. Opcion 2" << endl;
        cout << "3. Opcion 3" << endl;
        cout << "4. Salir" << endl;

        cin >> opcion;

        if (opcion>0 && opcion<=4)
        {
            cout << "Ingresaste la opcion: " << opcion << endl;
        }
        else 
        {
            cout << "Numero invalido" << endl;
        }
    } 

    cout << "Te has salido del menu" << endl;
    return 0;
}