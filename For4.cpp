#include <iostream>
using namespace std;
int main ()
{
    int num=0;

    cout << "Ingrese un numero entero por favor" << endl;
    cin >> num;

    for (int i=1; i<=10; i++)
    {
        int mult=num*i;
        cout << "El numero por " << i << " es: " << mult << endl;
    }

    return 0;
}