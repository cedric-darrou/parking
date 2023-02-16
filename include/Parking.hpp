#include <lib.hpp>

#ifndef PARKING.H
#define PARKING.H

unsigned int id = 0;

class Parking{
private:
    unsigned int id_parking;
    std::string nom;
    std::string localisation;
    size_t nb_places_occupees;
public:
    Parking();
    Parking(std::string n, std::string l, size_t nb) : 
    nom(n), localisation(l), nb_places_occupees(nb){
        id_parking = id++;
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