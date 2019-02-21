#ifndef Cola
#define Cola

#include <list>
#include <string>
#include "NodoCola.h"

class ColaServicio
{

private:
    //atributos
    NCola* primeroC;
    NCola* ultimoC;


public:

    //constructor
    ColaServicio();

    //metodos
    void encolar(recurso r);
    recurso desencolar();
    void imprimirCola();
    std::list<recurso> linealizar();
    recurso buscarDominio(std::string dominio);


};

#endif // Cola
