#ifndef NodoPila
#define NodoPila

#include <string>

    struct servicio{
        std::string idSesion;
        std::string idUsuario;
    };

    struct servicio1{
        std::string idSesion;
        std::string usuario;
    };

    class NPila
    {
        public:
        servicio Servicio;

        NPila* siguiente;


        NPila(servicio s);
        servicio datoNodo();
        NPila* getSiguiente();
        NPila* getAnterior();
        void setSiguiente(NPila* n);
        void setAnterior(NPila* n);
    };

#endif //NodoPila
