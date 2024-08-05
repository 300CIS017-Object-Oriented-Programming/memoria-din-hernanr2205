#ifndef ADMINISTRACION_H
#define ADMINISTRACION_H

#include <iostream>
#include "Propietario.h"
#include "Propiedad.h"
#include "CuartoUtil.h"
#include <vector>

using std::cout;
using std::endl;
using std::getline;
using std::string;
using std::vector;

class Administracion
{
private:
    float cobroAscensor;
    float costoBase;
    float recargo;
    int contIds;
    vector<Propietario *> propietarios;
    vector<Propiedad *> propiedades;

    void inicializarDatos();

public:
    Administracion();

    virtual ~Administracion();

    void imprimirPropietariosConParqueadero();

    void imprimirUnPropietario(double id);

    void imprimirPropietarios();

    void imprimirPropietariosSinCuarto();

    void imprimirPropietariosCuartoUtil(bool isTerminado); // Ojo un solo método sirve para las dos funciones.
    void recaudarAdministracion();

    void agregarPropiedad();

    void agregarPropietario();

    void relacionarPropietarioPropiedad();
};

#endif