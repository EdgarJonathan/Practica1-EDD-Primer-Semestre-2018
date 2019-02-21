#include <iostream>
#include <string>
#include "Pila.h"

PilaRecurso::PilaRecurso()
{
    primeroP = nullptr;
    ultimoP = nullptr;
}

void PilaRecurso::push(servicio S)
{
    NPila* nuevo;
    nuevo = new NPila(S);

    if(primeroP==nullptr)
    {
       primeroP = nuevo;
       ultimoP = primeroP;

    }else
    {
        nuevo->setSiguiente(primeroP);
        primeroP=nuevo;

    }

}


servicio PilaRecurso::pop()
{
    servicio aux={"NULL","NULL"};

    if(primeroP!=nullptr)
    {
        aux  = primeroP->datoNodo();
        NPila* nuevo =primeroP;
        primeroP = primeroP->getSiguiente();
        nuevo->setSiguiente(nullptr);

        delete nuevo;

    }


    return aux;

}

void PilaRecurso::imprimirPila()
{
    NPila* nuevo=primeroP;
    while(nuevo!=nullptr)
    {
       std::string idSesion = nuevo->datoNodo().idSesion;
       std::string idUser = nuevo->datoNodo().idUsuario;
       std::cout <<"[\"id Sesion:\""<<idSesion<<", \"id Usuario:\" "<<idUser<<"]\n";
       nuevo = nuevo->getSiguiente();

    }

    if(primeroP==nullptr){

        std::cout<<"la lista esta vacia \n"<<std::endl;
    }
}



std::list<servicio1> PilaRecurso::linealizar(ListaUsuario listausuario )
{
    std::list<servicio1> lista;
    NPila *tmp = primeroP;
    servicio1 s;

    if(primeroP!=nullptr)
    {
        while(tmp!=nullptr){

            s.idSesion =tmp->datoNodo().idSesion;
            s.usuario  = listausuario.getUsuario(tmp->datoNodo().idUsuario).nombre;

            lista.push_back(s);
            tmp = tmp->getSiguiente();
        }

    }else
    {

        lista.push_back({"Pila Vacia","Pila Vacia"});
    }

    vaciarPila();
    return lista;
}



void PilaRecurso::vaciarPila()
{
 if(primeroP!=nullptr)
 {
     while(primeroP!=ultimoP)
     {
         NPila* aux =primeroP;
         primeroP=primeroP->getSiguiente();
         aux->setSiguiente(nullptr);
         delete aux;
     }

     if(primeroP==ultimoP)
     {
         NPila* aux =primeroP;
         delete aux;
         primeroP=nullptr;
         ultimoP = nullptr;
     }

 }


}


