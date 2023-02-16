#include <Parking.hpp>

#ifndef ACCES.H
#define ACCES.H

unsigned int id = 0;

class Acces : public Parking {
private:
    unsigned int id_acces;
    std::string nom;
    std::string adresse;
public:
    Acces();
    Acces(std::string n, std::string a) : 
    nom(n), adresse(a){
        id_acces = id++;
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