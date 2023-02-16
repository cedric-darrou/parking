#include "libs.hpp"

#ifndef SORTIE.H
#define SORTIE.H

unsigned int id = 0;

class Sortie : public Acces {
private :
public : 
    virtual ~Sortie() = 0;
    void lecture_ticket(int i);
};

#endif