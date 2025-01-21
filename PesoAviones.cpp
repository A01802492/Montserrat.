#include "PesoAviones.h"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

PesoAviones::PesoAviones(int tam) : tam(tam)
{
    arr = new int[tam];
}

void PesoAviones::llenarArreglo()
{
    srand(time(0));
    for (int i = 0; i < tam; ++i) {
        arr[i] = rand() % 996 + 5;
    }
}

void PesoAviones::calcularDispersiones() 
{
    float sum = 0;
    for (int i = 0; i < tam; ++i) {
        sum += arr[i];
    }
    float mean = sum / tam;

    float varianzaSum = 0;
    for (int i = 0; i < tam; ++i) {
        varianzaSum += pow(arr[i] - mean, 2);
    }
    varianza = varianzaSum / tam;
    desviacionEstandar = sqrt(varianza);

    cout << "Varianza: " << varianza << endl;
    cout << "Desviación estándar: " << desviacionEstandar << endl;
}

void PesoAviones::consultarAvion() 
{
    int indice;
    do {
        cout << "Índice del avión a consultar <0.." << tam - 1 << ">: ";
        cin >> indice;
        if (validarIndice(indice)) {
            cout << "El avión número " << indice << " almacena el valor " << arr[indice] << endl;
            break;
        } else {
            cout << "Error, valor de índice fuera de rango, inténtalo de nuevo" << endl;
        }
    } while (true);
}

void PesoAviones::cambiarPeso()
{
    int indice;
    do {
        cout << "Índice del avión a cambiar <0..49>: ";
        cin >> indice;
        if (validarIndice(indice)) {
            cout << "Peso actual del avión en el índice " << indice << " es " << arr[indice] << endl;
            int nuevoPeso;
            do {
                cout << "Introduce el nuevo peso (5-1000): ";
                cin >> nuevoPeso;
                if (validarPeso(nuevoPeso)) {
                    arr[indice] = nuevoPeso;
                    cout << "Peso actualizado correctamente." << endl;
                    break;
                } 
                else {
                    cout << "Error, valor de peso fuera de rango, inténtalo de nuevo" << endl;
                }
            } 
            while (true);
            break;
        } 
        else {
            cout << "Error, valor de índice fuera de rango, inténtalo de nuevo" << endl;
        }
    } while (true);
}

bool PesoAviones::validarIndice(int indice) 
{
    return indice >= 0 && indice < tam;
}

bool PesoAviones::validarPeso(int peso) 
{
    return peso >= 5 && peso <= 1000;
}

void PesoAviones::ordenarArreglo()
{
    sort(arr, arr + tam, greater<int>());
    cout << "Arreglo ordenado de manera descendente:" << endl;
    for (int i = 0; i < tam; ++i) {
        cout << "Índice " << i << ": " << arr[i] << endl;
    }
}

PesoAviones::~PesoAviones()
{

}


