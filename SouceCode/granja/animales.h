#ifndef ANIMALES_H
#define ANIMALES_H

#include <iostream>

class animal
{
  public:
    bool esta_vivo;
    int n_patas;
    animal();
    virtual void hable();
    void muerase ();
};
class gallina:public animal
{
   public:
   gallina();
   virtual void hable();
   void ponga_huevo();
};

class perro:public animal
{
public:
    std::string color;
    perro();
    virtual void hable();
    void haga_truco();
};


#endif // ANIMALES_H
