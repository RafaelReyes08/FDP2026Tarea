#include <iostream>
using namespace std;
int main ()
{
    int numero, total=0;

    while (numero !=0)
    {
        cout << "Ingrese numeros distintos de cero" << endl;
        cout << "Los numeros se sumaran hasta que salga cero" << endl;

        cin >>numero;

        total= total + numero;

        cout << "Su suma es: " << total << endl;
    }

    cout << "La suma de los numeros es: " << total << endl;
    return 0;
}