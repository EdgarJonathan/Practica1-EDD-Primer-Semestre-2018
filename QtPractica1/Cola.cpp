#include <iostream>
#include <string>
#include "Cola.h"

ColaServicio::ColaServicio()
{
    primeroC = nullptr;
    ultimoC = nullptr;
}

void ColaServicio::encolar(recurso r)
{
    NCola* nuevo;
    nuevo = new NCola(r);

    if(primeroC==nullptr)
    {
       primeroC=nuevo;

       primeroC->setSiguiente(primeroC);
       primeroC->setAnterior(primeroC);

       ultimoC =primeroC;
    }else
    {

        nuevo->setSiguiente(primeroC);
        nuevo->setAnterior(ultimoC);
        primeroC->setAnterior(nuevo);
        ultimoC->setSiguiente(nuevo);

        ultimoC=nuevo;

    }

}


recurso ColaServicio::desencolar()
{
    recurso aux={"NULL","NULL"};

    if(primeroC!=nullptr)
    {
        if(primeroC!=ultimoC)
        {
          aux = primeroC->datoNodo();

          ultimoC=primeroC;
          primeroC =primeroC->getSiguiente();

        }else {
            aux=primeroC->datoNodo();
        }

    }



    return aux;

}

void ColaServicio::imprimirCola()
{
    NCola* nuevo=primeroC;
    if(primeroC!=nullptr)
    {
        do{
           std::string dominio = nuevo->datoNodo().dominio;
           std::string contenido   = nuevo->datoNodo().contenido;

           std::cout <<"[\"Dominio:\""<<dominio<<", \"Contenido:\" "<<contenido<<" ]\n";

           nuevo = nuevo->getSiguiente();
        }while(nuevo!=primeroC);

    }else {

        std::cout <<"La lista se encuentra vacia \n";
    }

}


std::list<recurso> ColaServicio::linealizar()
{
    std::list<recurso> lista;
    NCola *tmp = primeroC;
    do{
        lista.push_back(tmp->datoNodo());
        tmp = tmp->getSiguiente();
    }while(tmp!=primeroC);
     return lista;
}



recurso ColaServicio::buscarDominio(std::string dominio)
{
    recurso aux ={"NULL","NULL"};

    NCola *tmp = primeroC;
    do{
        if(dominio.compare(tmp->datoNodo().dominio)==0)
        {
            aux.dominio=tmp->datoNodo().dominio;
            aux.contenido=tmp->datoNodo().contenido;

        }

        tmp = tmp->getSiguiente();
    }while(tmp!=primeroC);


    return aux;
}


