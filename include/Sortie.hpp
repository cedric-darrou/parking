#include <Acces.hpp>

#ifndef SORTIE.H
#define SORTIE.H

unsigned int id = 0;

class Sortie : public Acces {
public :
private : 
    virtual ~Sortie() = 0;
    void lecture_ticket(int i);
};

#endif