#include "Lista.h"


using namespace std;

Nodo* ListaUsuario::buscarId(std::string d)
{
    Nodo* tmp = primero;
        do {
            if(tmp->datoNodo().id==d){
                return tmp;
            }
            tmp = tmp->getSiguiente();
        }while (tmp!=primero);

        return nullptr;
}

ListaUsuario::ListaUsuario()
{
    primero = nullptr;
    ultimo = nullptr;
}
usuario ListaUsuario::getUsuario(std::string id)
{
    usuario result ={"NULL","NULLL","NULL","NULL","NULL"};
    Nodo * search = buscarId(id);
    if(search!=nullptr)
    {
        return search->datoNodo();
    }

    return result;

}

std::string ListaUsuario::insertarLista(usuario user)
{

      Nodo* nuevo;
      nuevo = new Nodo(user);

    if(primero==nullptr)
    {
        primero = nuevo;
        primero->setSiguiente(primero);
        ultimo= primero;

        return "se agrego exitosamente";

    }else  if(buscarId(nuevo->datoNodo().id)==nullptr)
    {
        ordenarLista(nuevo);

        return "se agrego exitosamente";
    }
    else
    {
        return "id ya existe";
    }

}

void ListaUsuario::ordenarLista(Nodo* nuevo)
{
        Nodo* actual =primero;

    //si el nuevo es menor al primero
    if(nuevo->datoNodo().nombre < primero->datoNodo().nombre )
    {

        nuevo->setSiguiente(primero);
        ultimo->setSiguiente(nuevo);
        primero = nuevo;

    }//si es mayor o igual ultimo
    else if(nuevo->datoNodo().nombre >= ultimo->datoNodo().nombre)
    {
        nuevo->setSiguiente(primero);
        ultimo->setSiguiente(nuevo);
        ultimo=nuevo;

    }
    //recoriendo la lista si nuevo es mayor o igual actual
    //y si nuevo es menor o igual siguiente de actual
    else
    {

        while(actual!=ultimo)
        {
            if((nuevo->datoNodo().nombre >= actual->datoNodo().nombre)
               &&(nuevo->datoNodo().nombre <= actual->getSiguiente()->datoNodo().nombre))
            {
                nuevo->setSiguiente(actual->getSiguiente());
                actual->setSiguiente(nuevo);
                break;
            }

            actual=actual->getSiguiente();
        }

    }

}

std::list<usuario> ListaUsuario::linealizar()
{
    std::list<usuario> lista;
    Nodo *tmp = primero;
    do{
        lista.push_back(tmp->datoNodo());
        tmp = tmp->getSiguiente();
    }while(tmp!=primero);
     return lista;
}



void ListaUsuario::imprimirLista()
{
    Nodo* actual =primero;

    do{
       std::cout <<"<-["+actual->datoNodo().nombre+"]->"<<endl;

       actual=actual->getSiguiente();
    }while(actual!=primero);
}

usuario ListaUsuario::buscarUserId(std::string d)
{


//    struct usuario{
//        std::string id;
//        std::string nombre;
//        std::string correo;
//        std::string fecha;
//    };

    usuario userAux ={"NULL","NULL","NULL","NULL","NULL"};

    Nodo* tmp = primero;
        do{
            if(tmp->datoNodo().id==d){

                userAux.nombre =tmp->datoNodo().nombre;
                userAux.correo = tmp->datoNodo().correo;
                userAux.fecha = tmp->datoNodo().fecha;
                userAux.id   = tmp->datoNodo().id;

                return userAux;
            }
            tmp = tmp->getSiguiente();
        }while (tmp!=primero);



        return userAux;

}
