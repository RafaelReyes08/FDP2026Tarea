#include <iostream>
using namespace std;
int main ()
{
    int n, e, multi, nuevoNum;

    cout << "Ingresa un numero por favor" << endl;
    cin >> n;
    cout << "Ingresa un numero para el exponente por favor" << endl;
    cin >> e;

    for (int i=2; i<=e; i++)
    {
        multi=n*n;
        nuevoNum=multi;
    }

    cout << "El numero " << n << " elevado a " << e << " es: " << nuevoNum << endl;

    return 0;
}