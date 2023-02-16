#include "TciketMagnétique.hpp"
#include<iostream>

using namespace std;

    TciketMagnétique::TciketMagnétique();
    void TciketMagnétique::alerte();

    std::string TciketMagnétique::getDateEntrée() { return date_entrée_}
    void TciketMagnétique::setDateEntréé(std::string date_entré){
        date_entrée_ = date_entré;
    }