#include "Caisse.h"

using namespace std;

 Caisse::Caisse();
    string Caisse::lire_ticket();
    double Caisse::calculer_mintant();
    double Caisse::afficher_montant();
    std::string Caisse::imprimer_ticket_sortie();
    std::string Caisse::imprimer_recu();
    double Caisse::compatibilité();

     //getter
    int Caisse::get_contenu(){ return contenu;}
    std::string Caisse::lieu(){return lieu};

    //setters
    void Caisse::setContenu(int contenu){
        contenu_ = contenu;
    }
    void Caisse::setEtage(int etage){
        etage_ = etage;
        
    }
    
    std::string Caisse::setLieu(std::string lieu);