#include "../libs.hpp"

#ifndef GESTIONENTREE_H
#define GESTIONENTREE_H

class GestionEntree{
private:
    int id_;
    double duree_stationment_;
public:
    GestionEntree();
    virtual ~GestionEntree();

    //Getter
    int getId();
    double get_duree_stationnement();
};

#endif