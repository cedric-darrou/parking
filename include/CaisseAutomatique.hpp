#include "libs.hpp"

#ifndef CAISSE_H
#define CAISSE_H


class CaisseAutomatique{
private:
    int id_;
public:
    CaisseAutomatique();

    //Getter
    int getId();

    //Methods
    double rendu_monnaie();
    std::string demande_recu();
};



#endif