#include "../include/CaisseAutomatique.hpp"
#include<iostream>
using namespace std;



    CaisseAutomatique::CaisseAutomatique(){}
    double CaisseAutomatique::rendu_monnaie(){
        return 1.98;
    }
    std::string CaisseAutomatique::demande_recu(){
        return "Rendu";
    }

    
    int CaisseAutomatique::getId() {
        return id_;
    }