#include "../libs.hpp"
#include "Voie.hpp"
#include "../caisse/CarteBancaire.hpp"
#include "../caisse/Abonnement.hpp"
#include "../caisse/GestionDebit.hpp"

//Comment

#ifndef BORNE.H
#define BORNE.H

unsigned int id = 0;

class Borne : public Voie, public GestionDebit {
private:
    unsigned int id_voie_;
    bool operationnel_;
public:
    Borne() : operationnel_(true){
        id_voie_ = id++;
    };
    ~Borne();

    //Getter
    unsigned int get_id_voie();
    bool get_operationnel();

    //Methods
    CarteBanquaire sauver_empreinte();
    TicketMagnetique imprimer_ticket_entree();
    void appel_urgence();
    Abonnement lire_carte_abonnement(),
};

#endif