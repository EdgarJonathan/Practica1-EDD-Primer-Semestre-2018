#include <iostream>
#include <Lista.h>
#include <Cola.h>
#include <NodoUser.h>
#include <Pila.h>



using namespace std;



int main()
{

   //-----------------------INgresando Usuarios------------------------------
    ListaUsuario milista =ListaUsuario();

    for (int j=0;j<10;j++) {
      std::string num = std::to_string(j);
      milista.insertarLista({"id"+num,"lol"+num,"correo"+num,"fecha"+num,"dominio"+num});
    }

    milista.imprimirLista();

    std::string lol = milista.getUsuario("id65").dominio;

    std::cout<< lol<<std::endl;

 //-----------------------probando la cola------------------------------

 /*   ColaServicio miCola =ColaServicio();
    for (int j=0;j<5;j++) {
      std::string num = std::to_string(j);
        miCola.encolar({"dominio"+num,"contenido"+num});
    }

    miCola.imprimirCola();
    for (int i =0 ;i<2;i++) {
       cout<<"\n["<<miCola.desencolar().dominio<<"]\n"<<endl;
       miCola.imprimirCola();
    }

    std::cout<<"\n"<<miCola.buscarDominio("dominio56").contenido<<std::endl;
*/
//--------------------------probando la pila--------------------

/*    PilaRecurso miPila = PilaRecurso();
    for (int i=0 ;i<5;i++) {
        std::string num = std::to_string(i);
        miPila.push({"sesion"+num,"User"+num});
    }


    miPila.imprimirPila();
    for (int j=0;j<2;j++) {
      std::cout<<"["+miPila.pop().idSesion+"]\n"<<std::endl;
       miPila.imprimirPila();
    }


    miPila.vaciarPila();
    miPila.imprimirPila();

*/




//-------------------------pruebas Ramdon xd-----------------------

/*
    std::string str1 ("green apple");
    std::string str2 ("green apple");


    if(str1.compare(str2)==0)
    {
        std::cout<<"las cadenas son iguales "<<std::endl;
    }else
    {
     std::cout<<"las cadenas son diferentes "<<std::endl;
    }
*/
    cout << "\n termino el programa men \n" << endl;
    return 0;
}
