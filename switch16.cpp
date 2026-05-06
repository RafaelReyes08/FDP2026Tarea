#include <iostream>
using namespace std;
int main ()
{
    int dia;

    cout << "Ingresa el dia de la semana del 1 al 7 para ver tu horario correspondiente" << endl;
    cin >> dia;

    switch (dia)
    {
        case 1: 
        cout << "Tienes EECyT de 9:00-11:00 AM y FDP de 11:00-1:00 PM"<< endl;
        break;

        case 2: 
        cout << "Tienes AVM de 9:00-11:00 AM y MD1 de 11:00-1:00 PM"<< endl;
        break;

        case 3: 
        cout << "Tienes EECyT de 9:00-11:00 AM y FDP de 11:00-1:00 PM"<< endl;
        break;

        case 4: 
        cout << "Tienes AVM de 9:00-11:00 AM y MD1 de 11:00-1:00 PM"<< endl;
        break;

        case 5: 
        cout << "Tienes discusion de MD1 de 8:00-9:00 AM y discusion de AVM de 9:00-10:00 AM"<< endl;
        break;

        case 6: 
        cout << "No tenes clase, estudia"<< endl;
        break;

        case 7: 
        cout << "Dormite mejor"<< endl;
        break;

        default: 
        cout << "No ingresaste un dia valido"<< endl;
        break;
    }
    return 0;
}