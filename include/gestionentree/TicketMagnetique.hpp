#include "../libs.hpp"
#include "GestionEntree.hpp"

#ifndef CAISSE_H
#define CAISSE_H

class TicketMagnetique : public GestionEntree{
private:
    std::string date_entree_;

public:
    TicketMagnetique();
    ~TicketMagnetique();

    //Getter
    std::string getDateEntree();

    //Methods
    void alerte();
};

#endif