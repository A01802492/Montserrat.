#ifndef PESOAVIONES_H
#define PESOAVIONES_H

class PesoAviones
{
    private:
        int tam;
        int* arr;
        float varianza;
        float desviacionEstandar;

    public:
        PesoAviones(int tam);
        virtual ~PesoAviones();
        void llenarArreglo();
        void calcularDispersiones();
        void consultarAvion();
        void cambiarPeso();
        void ordenarArreglo();
        bool validarIndice(int indice);
        bool validarPeso(int peso);

};

#endif