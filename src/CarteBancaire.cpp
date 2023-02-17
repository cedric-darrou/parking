#include "CarteBancaire.hpp"
#include<string>
#include<iostream>

using namespace std;

CarteBancaire::CarteBancaire(){}

//getters
int CarteBancaire::getNomCarte(){
     return (nom_carte_);
}

int CarteBancaire::getCryptogram(){
    return (cryptogram_);
}

string CarteBancaire::getNom(){
     return (nom_);
}

string CarteBancaire::getPrenom(){
     return(prenom_);
}

string CarteBancaire::dateExpr(){
     return (dateExpr_);
}