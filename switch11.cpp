#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
    int numero1, numero2, suma, resta, multi, div, potencia, elevado, res, opcion;
    
    numero1=0;
    numero2=0;
    opcion=0;

    cout << "Bienvenido a la calculadora avanzada, ingrese dos numeros por favor:" << endl;
    cin >> numero1;
    cin >> numero2;

    cout << "Estas son las opciones de operaciones, escoja una por favor: " << endl;
    cout << "1. Suma" << endl;
    cout << "2. Resta" << endl;
    cout << "3. Multiplicacion" << endl;
    cout << "4. Division" << endl;
    cout << "5. Potenciacion" << endl;
    cout << "6. Residuo" << endl;

    cin >> opcion;

    switch (opcion)
    {
        case 1:
        suma=numero1+numero2;
        cout << "Este es el resultado de la suma: " << suma << endl;
        break;

        case 2:
        resta=numero1-numero2;
        cout << "Este es el resultado de la suma: " << resta << endl;
        break;
        
        case 3:
        multi=numero1*numero2;
        cout << "Este es el resultado de la suma: " << multi << endl;
        break;
        
        case 4:
        div=(numero1/numero2);
        cout << "Este es el resultado de la division: " << div << endl;
        break;
        
        case 5:
        cout << "¿Que numero quisiera elevar?" << endl;
        cout << "Escoja 1 para el primero" << endl;
        cout << "Escoja 2 para el segundo" << endl;
        cin >> opcion;
        cout << "¿A que potencia se desea elevar?" << endl;
        cin >> elevado;

        
        if (opcion == 1)
        {
            potencia= pow (numero1, elevado);
            cout << "Este es el resultado de la potenciacion: " << potencia << endl;
            return 0;
        }
        else if (opcion == 2)
        {
            potencia= pow (numero2, elevado);
            cout << "Este es el resultado de la potenciacion: " << potencia << endl;
            return 0;
        }
        else 
        {
            cout << "La opcion seleccionada no es valida" << endl;
            return 0;
        }
        break;
        
        case 6:
        res=numero1%numero2;
        cout << "Este es el resultado del residuo entre el primer y segundo numero: " << res << endl;
        break;
        
        default:
        cout << "El numero ingresado como opcion no corresponde a uno valido" << endl;
        break;
    }
    return 0;
}