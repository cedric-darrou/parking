#ifndef CAISSE_H
#define CAISSE_H
#include<string>

class GestionDebit
{
private:
    int num_carte_volé_[];
public:
    GestionDebit();
    std::string lire_carte_bleu();
    bool débiter_cb();
    std::string ticket_perdu();
    bool verifier_carte_non_volee();

    int getNumCarteVole();
    //void setNumCarteVolé(int num_carte_volé);

   
};



#endif