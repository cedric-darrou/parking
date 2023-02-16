#ifndef CAISSE_H
#define CAISSE_H
#include<string>


class CaisseAutomatique
{
private:
    int id_;
public:
    CaisseAutomatique();
    double rendu_monnaie();
    std::string demande_recu();

    
    int getId();
    void setId(int id);

};



#endif