#include "libs.hpp"

#ifndef CAISSE_H
#define CAISSE_H



class TicketMagnetique
{
private:
    std::string date_entree_;
public:
    TicketMagnetique();
    void alerte();

    std::string getDateEntree();
    void setDateEntree(std::string date_entree);

    ~TicketMagnetique();
};



#endif