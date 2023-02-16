#include "libs.hpp"

#ifndef PARKING.H
#define PARKING.H

unsigned int id = 0;

class Parking{
private:
    unsigned int id_parking_;
    std::string nom_;
    std::string localisation_;
    size_t nb_places_occupees_;
public:
    Parking();
    Parking(std::string n, std::string l, size_t nb) : 
    nom_(n), localisation_(l), nb_places_occupees_(nb){
        id_parking_ = id++;
    };
    virtual ~Parking();

    //Getter
    unsigned int get_id_parking();
    std::string get_nom();
    std::string get_localisation();
    std::string get_nb_places_occupees();

    //Setter
    void set_nom(std::string new_name);
    void set_localisation(std::string new_adresse);

    //Methods
    void voiture_entre();
    void voiture_sort();
};

#endif