#include <iostream>
using namespace std;
int main ()
{
    int serie=0, sig, primero, segundo;

    cout << "Ingrese que tantos terminos de la serie desea ver" << endl;
    cin >> serie;

    primero=0;
    segundo=1;
        
    cout << primero << endl;
    cout << segundo << endl;

    for (int i=1; i<=(serie-2); i++)
    {
        sig=primero+segundo;
        primero=segundo;
        segundo=sig;
        cout << sig << endl;
    }

    return 0;
}