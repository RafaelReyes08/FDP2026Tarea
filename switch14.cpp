#include <iostream>
using namespace std;
int main()
{
    int edad=0;

    cout << "Bienvenido al categorizador de peliculas por edad" << endl;
    cout << "Ingrese su edad por favor" << endl;

    cin >> edad;

    if (edad>0 && edad<=120)
    {
        switch (edad)
        {
            case 1 ... 13:

            if (edad>=1 && edad<=7)
            {
                cout << "Te recomiendo las peliculas de categoria G, para todo publico"<< endl;
                return 0;
            }
            else if (edad>7 && edad<=12)
            {
                cout << "Te recomiendo las peliculas de categoria PG, peliculas con temas no aptos para ninos pequenos"<< endl;
                return 0;
            }
            else 
            {
                cout << "Te recomiendo las peliculas de categoria PG-13, peliculas donde se recomienda supervision parental"<< endl;
                return 0;
            }

            break;

            case 14 ... 120:

            if (edad>=14 && edad<=17)
            {
                cout << "Te recomiendo las peliculas de categoria R, aunque es necesaria la supervision parental"<< endl;
                return 0;
            }
            else 
            {
                cout << "Te recomiendo las peliculas de categoria R"<< endl;
                return 0;
            }
            
            break; 

            default:
            {
                cout << "Estas muerto quizas"<< endl;
                return 0;
            }
        }
        return 0;
    }
    else 
    {
        cout << "¿Estas vivo?"<< endl;
        return 0;
    }
    return 0;
}