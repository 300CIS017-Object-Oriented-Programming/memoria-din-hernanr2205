#include <iostream>
#include "Administracion.h"

using std::cin;
using std::cout;
using std::string;

void mostrarMenuPropietarios(Administracion &adminMenuProp)
{

    int opcPropietarios = 0;
    cout << "Menu de propietarios ... \n";
    cout << "1. Mostrar propietarios \n";
    cout << "2. Propietarios con parqueadero \n";
    cout << "3. Propietarios sin cuarto util\n";
    cout << "4. Propietarios con cuarto util sin terminar \n";
    cout << "5. Propietarios con cuarto terminado \n";
    cout << "6. Agregar propietario\n";
    cout << "7. Mostrar un propietario dado su Id\n";
    cout << "-1. Volver\n";
    ;

    cin >> opcPropietarios;
    int idPropietario;
    bool isCuartoTerminado = false;
    switch (opcPropietarios)
    {
    case 1:
        adminMenuProp.imprimirPropietarios();
        break;

    case 2:
        adminMenuProp.imprimirPropietariosConParqueadero();
        break;

    case 3:
        adminMenuProp.imprimirPropietariosSinCuarto();
        break;

    case 4:
        isCuartoTerminado = false;
        adminMenuProp.imprimirPropietariosCuartoUtil(isCuartoTerminado);
        break;

    case 5:
        isCuartoTerminado = true;
        adminMenuProp.imprimirPropietariosCuartoUtil(isCuartoTerminado);
        break;

    case 6:
        adminMenuProp.agregarPropietario();
        break;

    case 7:
        cout << "Ingrese el ID del propetario\n"
             << endl;
        cin >> idPropietario;
        adminMenuProp.imprimirUnPropietario(idPropietario);
        break;

    default:
        break;
    }
}

void mostrarMenuAdministracion(Administracion &administracionMenuAdmin)
{
    int opc = 0;
    cout << "1. Recaudar administracion \n";
    cout << "2. Asociar propietario-propiedad \n";
    cout << "3. Agregar propiedad \n";
    cout << "-1. Volver\n";
    cin >> opc;

    switch (opc)
    {
    case 1:
        administracionMenuAdmin.recaudarAdministracion();
        break;

    case 2:
        administracionMenuAdmin.relacionarPropietarioPropiedad();
        break;

    case 3:
        administracionMenuAdmin.agregarPropiedad();
        break;

    default:
        break;
    }
}

void menu(Administracion &administracionMenu)
{
    int opc = 0;
    do
    {
        cout << "\n ****Bienvenidos ****\n";
        cout << "1. Mostrar menu Propietarios \n";
        cout << "2. Mostrar menu Administracion \n";
        cout << "-1. Salir \n";

        cin >> opc;

        switch (opc)
        {
        case 1:
            mostrarMenuPropietarios(administracionMenu);
            break;
        case 2:
            mostrarMenuAdministracion(administracionMenu);
            break;
        default:
            break;
        }
    } while (opc != -1);
}

int main()
{

    Administracion administracion; // Instanciado con el stack
    menu(administracion);
    return 0;
}