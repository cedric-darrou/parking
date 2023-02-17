#include "../libs.hpp"
#include "Caisse.hpp"

#ifndef CAISSEAUTO_H
#define CAISSEAUTO_H


class CaisseAutomatique : public Caisse{
private:
    int id_;
public:
    CaisseAutomatique();
    virtual ~CaisseAutomatique();

    //Getter
    int getId();

    //Methods
    double rendu_monnaie();
    std::string demande_recu();
};

#endif