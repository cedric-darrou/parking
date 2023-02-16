#ifndef CAISSE_H
#define CAISSE_H
#include<string>



class TicketMagnetique
{
private:
    std::string date_entree_;
public:
    TicketMagnetique();
    void alerte();

    std::string getDateEntree();
    void setDateEntréé(std::string date_entree);

    ~TicketMagnetique();
};



#endif