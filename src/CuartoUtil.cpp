
#include "CuartoUtil.h"

CuartoUtil::CuartoUtil()
{
    numeracion = "";
    piso = 0;
    estaTerminado = false;
}

CuartoUtil::CuartoUtil(string &numeracion, int piso, bool estaTerminado) : numeracion(numeracion), piso(piso),
                                                                           estaTerminado(estaTerminado) {}

void CuartoUtil::mostrarDatos()
{
    cout << "El piso es: " << piso << "\n";
    cout << "El numero de identificacion es: " << numeracion << "\n";
    cout << "El cuarto esta: " << imprimirInfoEstadoCuarto() << "\n";
}

string CuartoUtil::imprimirInfoEstadoCuarto()
{
    // Usa operador ternario para retornar la info
    return estaTerminado ? "terminado" : "No terminado";
}

const string &CuartoUtil::getNumeracion() const
{
    return numeracion;
}

void CuartoUtil::setNumeracion(const string &numeracion)
{
    CuartoUtil::numeracion = numeracion;
}

int CuartoUtil::getPiso() const
{
    return piso;
}

void CuartoUtil::setPiso(int piso)
{
    CuartoUtil::piso = piso;
}

bool CuartoUtil::isEstaTerminado() const
{
    return estaTerminado;
}

void CuartoUtil::setEstaTerminado(bool estaTerminado)
{
    CuartoUtil::estaTerminado = estaTerminado;
}
