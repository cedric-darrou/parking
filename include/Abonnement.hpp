#ifndef CAISSE_H
#define CAISSE_H
#include<string>

class Abonnement
{
private:
    std::string nom_;
    std:: string prenom_;
    double solde_;
    
public:
    Abonnement();
    
    std::string getNom();
    std::string getPrenom();
    double getSolde();

    void setNom(std::string nom);
    void setPrenom(std:: string prenom);
    void setSolde(double solde);
};


#endif