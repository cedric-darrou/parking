#include "libs.hpp"

#ifndef CAISSE_H
#define CAISSE_H

class GestionEntree{
private:
    int id_;
    double duree_stationment_;
public:
    GestionEntree();
    int getId();
    double get_duree_stationnement();
};



#endif