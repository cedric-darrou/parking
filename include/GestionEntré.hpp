#ifndef CAISSE_H
#define CAISSE_H
#include<string>

class GestionEntré
{
private:
    int id_;
    double durée_stationment;
public:
    GestionEntré();
    
    int getId();
    void setId(int id);
};



#endif