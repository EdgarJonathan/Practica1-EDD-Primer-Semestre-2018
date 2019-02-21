#ifndef NodoUser
#define NodoUser

#include <string>

    struct usuario{
        std::string id;
        std::string nombre;
        std::string correo;
        std::string fecha;
        std::string dominio;
    };

    class Nodo
    {
        protected:
        usuario user;
        Nodo* siguiente;

        public:
        Nodo(usuario user);
        usuario datoNodo();
        Nodo* getSiguiente();
        void setSiguiente(Nodo* n);

    };

#endif // NodoUser
