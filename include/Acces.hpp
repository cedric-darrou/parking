#include "Parking.hpp"
#include "libs.hpp"

//Comment

#ifndef ACCES.H
#define ACCES.H

unsigned int id = 0;

class Acces : public Parking {
private:
    unsigned int id_acces_;
    std::string nom_;
    std::string adresse_;
public:
    Acces();
    Acces(std::string n, std::string a) : 
    nom_(n), adresse_(a){
        id_acces_ = id++;
    };
    virtual ~Acces();

    //Getter
    unsigned int get_id_acces();
    std::string get_nom();
    std::string get_adresse();

    //Methods
    void afficher_place_dispo(int a, int b);
};

#endif