#include <lib.hpp>

#ifndef PARKING.H
#define PARKING.H

int id = 0;

class Parking{
private:
    unsigned int id_parking;
    std::string nom;
    std::string localisation;
    size_t nb_places_occupees;
public:
    Parking(string n, string l, size_t n) : 
    nom(n), localisation(l), nb_places_occupees(n){
        id_parking = id++;
    };
    virtual ~Parking();

    //List of class
};

#endif