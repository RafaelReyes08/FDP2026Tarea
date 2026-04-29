//Incluimos librerias

#include <iostream>
using namespace std;

int main()
{
    string usuarioReal="rafael", contrasenaReal="mondongo", usuario, contrasena;
    int intentos = 3;

    cout << "Ingrese su usuario" << endl;
    cin >> usuario;

    cout << "Ingrese su contrasena" << endl;
    cin >> contrasena;

    if (usuarioReal == usuario && contrasenaReal == contrasena)
    {
        cout << "Ha ingresado correctamente a su cuenta" << endl;
    }
    else
    {
        intentos = intentos - 1;
        cout << "Te equivocaste, tienes " << intentos << " restantes" << endl;
            
        cout << "Ingrese su usuario" << endl;
        cin >> usuario;

        cout << "Ingrese su contrasena" << endl;
        cin >> contrasena;

        else if (intentos == 0)
        {
            cout << "Se han terminado sus intentos, su cuenta esta bloqueada" << endl;
        }
        
    }
    return 0;

}