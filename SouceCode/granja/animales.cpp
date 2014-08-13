#include "animales.h"


animal::animal()
{
    esta_vivo = true;
    n_patas= 0;
}

void animal::hable()
{
    if (esta_vivo)
        std::cout << "???\n";
    else
        std::cout <<"RIP\n";
}

void animal::muerase()
{
    esta_vivo = false;
}
gallina::gallina()
{
    n_patas = 2;
}

void gallina::hable()
{
    if (esta_vivo)
        std::cout << "Clo.clo\n";
    else
        std::cout << "RIP\n";
}
void gallina::ponga_huevo()
{
    if (esta_vivo)
        std::cout << "\\\\O//\n";
    else
        std::cout << "Esta muerta!!!\n";
}
perro::perro()
{
    n_patas = 4;
    color ="cafe";
}
void perro::hable()
{
    if
            (esta_vivo) std::cout << "Guau\n";
    else
        std::cout << "RIP\n";
}
void perro::haga_truco()
{
    if
            (esta_vivo) std::cout << "sentado\n";
    else
        std::cout << "Está muerto!!!!\n";
}
