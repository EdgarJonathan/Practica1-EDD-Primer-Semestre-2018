#ifndef Pila
#define Pila

#include <list>
#include <string>
#include <Lista.h>
#include "NodoPila.h"

class PilaRecurso
{

private:
    //atributos
    NPila* primeroP;
    NPila* ultimoP;


public:

    //constructor
    PilaRecurso();

    //metodos
    void push(servicio s);
    servicio pop();
    void imprimirPila();
    std::list<servicio1> linealizar(ListaUsuario );

    void vaciarPila();
};

#endif // Pila
