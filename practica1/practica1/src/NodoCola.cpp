#include "NodoCola.h"

NCola::NCola(recurso s){
    Recurso = s;
    anterior =nullptr;
    siguiente=nullptr;
}

recurso NCola::datoNodo(){
    return Recurso;
}
NCola* NCola::getSiguiente(){
    return siguiente;
}
NCola* NCola::getAnterior(){
    return anterior;
}
void NCola::setSiguiente(NCola* n){
    siguiente=n;
}

void NCola::setAnterior(NCola* n){
    anterior=n;
}
