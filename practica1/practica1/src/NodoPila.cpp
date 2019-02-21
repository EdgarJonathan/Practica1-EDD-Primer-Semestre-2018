#include "NodoPila.h"

NPila::NPila(servicio s){
    Servicio = s;
    siguiente=nullptr;
}

servicio NPila::datoNodo(){
    return Servicio;
}
NPila* NPila::getSiguiente(){
    return siguiente;
}

void NPila::setSiguiente(NPila* n){
    siguiente=n;
}


