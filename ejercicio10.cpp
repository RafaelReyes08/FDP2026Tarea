//Incluimos librerias

#include <iostream>
using namespace std;

int main()
{
    float peso;
    int cobro, billetera;
    cout << "Ingrese el peso del paquete" << endl; 
    cin >> peso;
    cout << "Ingrese que tanto dinero posee su billetera" << endl; 
    cin >> billetera;


    if (peso <= 5 && peso > 0)
    {
        cobro = billetera - 5;
        cout << "El precio a pagar es 5, su nuevo saldo es: " << cobro << endl;
    }
    else if (peso >= 6 && peso <= 10)
    {
        cobro = billetera - 10;
        cout << "El precio a pagar es 10, su nuevo saldo es: " << cobro << endl;
    }
    else if (peso > 10)
    {
        cobro = billetera - 15;
        cout << "El precio a pagar es 15, su nuevo saldo es: " << cobro << endl;
    }
    else
    {
        cout << "El peso ingresado es incorrecto, ingrese otro nuevo" << endl;
        cin >> peso;
    }
    
    return 0;

}