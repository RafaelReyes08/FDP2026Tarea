#include <iostream>
using namespace std;
int main ()
{
    int puntaje=0;

    cout << "¡Bienvenido jugador!" << endl;
    cout << "Las opciones de puntaje son de 1 estrella a 5 estrellas" << endl;
    cout << "Ingrese su puntaje obtenido:" << endl;
    cin >> puntaje;

    switch (puntaje)
    {
        case 5: 
        cout << "¡Has obtenido un puntaje excelente, buen trabajo!" << endl;
        break;

        case 4: 
        cout << "¡Has obtenido un alto puntaje, sigue asi!" << endl;
        break;

        case 3: 
        cout << "Tu puntaje es pasable, podrias mejorar" << endl;
        break;

        case 2: 
        cout << "Has obtenido un puntaje bajo, ¡sigue intentando!" << endl;
        break;

        case 1: 
        cout << "¡Tu puntaje fue el mas bajo, pero... ¡No te rindas!" << endl;
        break;

        default:
        cout << "Lo siento jugador, parece que el puntaje que ingresaste no es valido" << endl;
        cout << "Prueba con un puntaje diferente" << endl;
        break;
    }
    return 0;
}