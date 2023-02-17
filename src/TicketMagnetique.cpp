#include "TicketMagnetique.hpp"
#include<iostream>

using namespace std;

TicketMagnetique::TicketMagnetique(){}

void TicketMagnetique::alerte(){}

std::string TicketMagnetique::getDateEntree() {
    return (date_entree_);
    }

void TicketMagnetique::setDateEntree(string date_entree){
    date_entree_ = date_entree;
}