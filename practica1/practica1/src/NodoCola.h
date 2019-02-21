#ifndef NodoCola
#define NodoCola

#include <string>

    struct recurso{
        std::string dominio;
        std::string contenido;
    };

    class NCola
    {
        public:
        recurso Recurso;
        NCola* anterior;
        NCola* siguiente;


        NCola(recurso r);
        recurso datoNodo();
        NCola* getSiguiente();
        NCola* getAnterior();
        void setSiguiente(NCola* n);
        void setAnterior(NCola* n);
    };

#endif //NodoCola
