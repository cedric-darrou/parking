#include "../libs.hpp"
#include "GestionEntree.hpp"

#ifndef CAISSE_H
#define CAISSE_H

class Abonnement : public GestionEntree{
private:
    std::string nom_;
    std:: string prenom_;
    double solde_;
    
public:
    Abonnement() = default;
    Abonnement(std::string n, std::string p);
    ~Abonnement();
    
    //Getter
    std::string getNom();
    std::string getPrenom();
    double getSolde();

    //Setter
    void setNom(std::string nom);
    void setPrenom(std::string prenom);
    void setSolde(double solde);

    //Methods
};

#endif