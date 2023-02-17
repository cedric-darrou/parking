#include "libs.hpp"

#ifndef CAISSE_H
#define CAISSE_H

class GestionDebit{
private:
    std::vector<int> num_carte_volee_;
public:
    GestionDebit();
    std::string lire_carte_bleu();
    bool debiter_cb();
    std::string ticket_perdu();
    bool verifier_carte_non_volee();

    int getNumCarteVolee(int i);
    //void setNumCarteVolé(int num_carte_volé);

   
};



#endif