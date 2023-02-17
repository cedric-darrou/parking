#include "../include/Caisse.hpp"

using namespace std;

Caisse::Caisse(){

}

string Caisse::lire_ticket(){
    return ("Lire ticket");
}

double Caisse::calculer_mintant(){
    return (2.28);
}
double Caisse::afficher_montant(){
    return (1.25);
}

string Caisse::imprimer_ticket_sortie(){
    return ("print ticket");
}

string Caisse::imprimer_recu(){
    return ("imprimer recu");
}

double Caisse::compatibilite(){
    return (2.95);
}

//Getter
int Caisse::get_contenu(){ 
    return contenu_;
}

string Caisse::get_lieu(){
    return lieu_;
};

/*//Setters
void Caisse::set_contenu(int contenu){
    contenu_ = contenu;
}

void Caisse::set_etage(int etage){
    etage_ = etage;
}
    
std::string Caisse::set_lieu(std::string lieu){
    lieu_ = lieu;
}*/