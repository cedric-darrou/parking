#include "Acces.hpp"
#include "libs.hpp"

//Comment

#ifndef ENTREE.H
#define ENTREE.H

class Entree : public Acces {
private :
public :
    virtual ~Entree() = 0;
    void imprimer_ticket_entree();
    bool verifier_poids();
};

#endif