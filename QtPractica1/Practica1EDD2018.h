// This file generated by ngrestcg
// For more information, please visit: https://github.com/loentar/ngrest

#ifndef PRACTICA1EDD2018_H
#define PRACTICA1EDD2018_H

#include <ngrest/common/Service.h>
#include <string>
#include "Lista.h"
#include "Pila.h"
#include  "Cola.h"




//! Dummy description for the service
/*! Some detailed description of the service */
// '*location' comment sets resource path for this service
// *location: practica1edd2018


class Practica1EDD2018: public ngrest::Service
{
public:



    // *method: POST
    // *location: /newuser
    std::string newuser(const usuario& User);

    // *method: POST
    // *location: /newuser
    void crearUsuario(const usuario& gdfads);



    // *method: POST
    // *location: /newrecurso
    std::string newrecurso(const recurso& R);

    //template<class Dato>

    // *method: GET
    // *location: /getrecurso/{id}
    std::string getrecurso( std::string& id);


	   	// *method: GET
    // *location: /getUsuarios
    std::list<usuario> getUsuarios();

   	// *method: GET
    // *location: /getcolaservicios
    std::list<servicio> getcolaservicios();



};


#endif // PRACTICA1EDD2018_H



