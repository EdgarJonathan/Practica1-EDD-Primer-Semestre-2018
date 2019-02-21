#include "NodoUser.h"
Nodo::Nodo(usuario d){
    user = d;
    siguiente=nullptr;
}

usuario Nodo::datoNodo(){
    return user;
}
Nodo* Nodo::getSiguiente(){
    return siguiente;
}

void Nodo::setSiguiente(Nodo* n){
    siguiente=n;
}
