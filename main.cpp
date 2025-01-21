//Santiago Eduardo Choreño Esquivel A01802492
//20 de enero del 2025
//Programa C++ con arreglos

#include <iostream>
#include "PesoAviones.h"

using namespace std;

int main() 
{
    PesoAviones A1(50);
    int opcion;

    do {
        cout << "Menú de acciones" << endl;
        cout << "<1>Desplegar arreglo" << endl;
        cout << "<2>Calcular desviación y varianza" << endl;
        cout << "<3>Consultar avión" << endl;
        cout << "<4>Cambiar peso del avión" << endl;
        cout << "<5>Ordenar el arreglo" << endl;
        cout << "<0>Salir" << endl;
        cout << "Ingrese una opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                A1.llenarArreglo();
                break;
            case 2:
                A1.calcularDispersiones();
                break;
            case 3:
                A1.consultarAvion();
                break;
            case 4:
                A1.cambiarPeso();
                break;
            case 5:
                A1.ordenarArreglo();
                break;
            case 0:
                cout << "Eso sería todo, gracias!" << endl;
                break;
            default:
                cout << "Opción no válida, inténtalo de nuevo." << endl;
        }
    } while (opcion != 0);

    return 0;
}
