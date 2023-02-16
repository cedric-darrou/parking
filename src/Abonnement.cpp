#include "Abonnement.hpp"
#include<string>
#include<iostream>

using namespace std;

    Abonnement::Abonnement();
    
    string Abonnement::getNom( return nom_);
    string Abonnement::getPrenom(){return prenom_}
    double Abonnement::getSolde() { return solde_}

    void Abonnement::setNom(std::string nom){
        nom_ = nom;
    }
    void Abonnement::setPrenom(std:: string prenom){
        prenom_ = prenom;
    }
    void Abonnement::setSolde(double solde){
        solde_ = solde;
    }