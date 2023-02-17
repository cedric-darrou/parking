#include "../include/GestionDebit.hpp"

using namespace std;

GestionDebit::GestionDebit(){}

string GestionDebit::lire_carte_bleu(){
    return "lecture carte";
}

bool GestionDebit::debiter_cb(){
    return (true);
}

string GestionDebit::ticket_perdu(){
    return ("ticket perdu");
}

bool GestionDebit::verifier_carte_non_volee(){
    return (true);
}

int GestionDebit::getNumCarteVolee(int i){
    return (num_carte_volee_[i]);
    }
