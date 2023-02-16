#ifndef CAISSE_H
#define CAISSE_H
#include<string>


class Caisse
{
private:
    int contenu_;
    int etage_;
    std::string lieu;
    float operation[];
    
public:
    Caisse();
    std::string lire_ticket();
    double calculer_mintant();
    double afficher_montant();
    std::string imprimer_ticket_sortie();
    std::string imprimer_recu();
    double compatibilité();

    //getter
    int get_contenu();
    std::string lieu();

    //setters
    void setContenu(int contenu);
    void setEtage(int etage);
    std::string setLieu(std::string lieu);
    

    ~Caisse();
};


#endif