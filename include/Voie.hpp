#include "Entree.hpp"
#include "Sortie.hpp"

//Comment

#include "libs.hpp"

#ifndef VOIE.H
#define VOIE.H

unsigned int id = 0;

class Voie : public Entree, public Sortie{
private:
    unsigned int id_voie_;
    bool ouvert_;
public:
    Voie() : ouvert_(true) {
        id_voie_ = id++;
    };
    virtual ~Voie();

    //Getter
    unsigned int get_id_voie();
    bool get_ouvert();

    //Methods
    void detection_poids();
    void ouvert_barriere();
    void fermetture_barriere();
    bool passage_deux_voitures();
};

#endif