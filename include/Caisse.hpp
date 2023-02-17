#include "libs.hpp"

#ifndef CAISSE_H
#define CAISSE_H


class Caisse {
private:
    int contenu_;
    int etage_;
    std::string lieu_;
    std::vector<float> operation_;
    
public:
    Caisse();
    std::string lire_ticket();
    double calculer_mintant();
    double afficher_montant();
    std::string imprimer_ticket_sortie();
    std::string imprimer_recu();
    double compatibilite();

    //Getter
    int get_contenu();
    std::string get_lieu();

    /*
    //Setters
    void setContenu(int contenu);
    void setEtage(int etage);
    std::string setLieu(std::string lieu);
    */

    ~Caisse();
};


#endif