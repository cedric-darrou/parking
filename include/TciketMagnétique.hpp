#ifndef CAISSE_H
#define CAISSE_H
#include<string>



class TciketMagnétique
{
private:
    std::string date_entrée_;
public:
    TciketMagnétique();
    void alerte();

    std::string getDateEntrée();
    void setDateEntréé(std::string date_entré);

    ~TciketMagnétique();
};



#endif