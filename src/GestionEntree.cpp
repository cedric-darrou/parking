#include "GestionEntree.hpp"
#include<iostream>
using namespace std;

GestionEntree::GestionEntree(){}

int GestionEntree::getId(){
    return (id_);
}

double GestionEntree::get_duree_stationnement(){
    return (duree_stationment_);
}