#include "../libs.hpp"
#include "GestionEntree.hpp"

#ifndef CAISSE_H
#define CAISSE_H


class CarteBancaire {
private:
    int nom_carte_;
    int cryptogram_;
    std::string nom_;
    std::string prenom_;
    std::string dateExpr_;
public:
    CarteBancaire();
    ~CarteBancaire();

    //setter
    void getNomCarte(int nom_carte);
    void getCryptogram(int cryptogram);
    void getNom(std::string nom);
    void getPrenom(std::string prenom);
    void dateExpr(std::string dateExp);

    //getters
    int getNomCarte();
    int getCryptogram();
    std::string getNom();
    std::string getPrenom();
    std::string dateExpr();
    
};


#endif