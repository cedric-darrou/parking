#include "CarteBancaire.hpp"
#include<string>
#include<iostream>

using namespace std;

     CarteBancaire::CarteBancaire();

    //setter
    void CarteBancaire::getNomCarte(int nom_carte) { nom_carte_ = nom_carte}
    void CarteBancaire::getCryptogram(int cryptogram);
    void CarteBancaire::getNom(std::string nom);
    void CarteBancaire::getPrenom(std::string prenom);
    void CarteBancaire::dateExpr(std::string dateExp);

    //getters
    int getNomCarte( return nom_carte_);
    int getCryptogram( return  return cryptogram_);
    std::string getNom( return nom_);
    std::string getPrenom( return prenom_);
    std::string dateExpr(return dateExpr_);