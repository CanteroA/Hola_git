#include <iostream>
#include "animales.h"

#define VERSION 1.0
perro trosky;

gallina josefina;

int main()
{
    std::cout << "Hola Granja.\n"
                 "Version: " << VERSION
              << "\n"
                 "Fecha:" << __DATE__
              << "\n"
              << "\n";



    /*animal firulais;
    firulais.hable();
    firulais.muerase();
    firulais.hable();*/
    /*perro* p = &trosky;
    std::cout <<(*p).n_patas<<std::endl;
    trosky.haga_truco();
    p->hable();
    trosky.muerase();
    p->esta_vivo=true;
    trosky.hable();
    p->muerase();
    trosky.haga_truco();*/


    /*animal* punt= &trosky;
    punt->hable();
    std::cout << ((perro*)punt)->color<<std::endl;

    trosky.esta_vivo=false;
    trosky.hable();
    josefina.esta_vivo=false;*/

//---------------------------------------------------------------------

    animal* anAr[10];

    for(int i=0; i<10; i++)
    {
        std::cout << "Usuario... Presione 1 para crear un perro \n";
        std::cout << "Usuario... Presione 2 para crear una gallina \n";

        char opcion;

        std::cin >> opcion;

        while (opcion != '1' && opcion != '2') {
            std::cout << "Usuario... no estas bien \n";
            std::cout << "Usuario... Presione 1 para crear un perro \n";
            std::cout << "Usuario... Presione 2 para crear una gallina \n";


            std::cin >> opcion;
        }
        if(opcion=='1'){
            anAr[i] = new perro();

        }
        if (opcion =='2'){
            anAr[i] = new gallina();

        }

    }

    for (int i=0; i<10; i++){
        anAr[i]->hable();
    }



    return 0;
}
