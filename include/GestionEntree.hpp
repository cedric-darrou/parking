#ifndef CAISSE_H
#define CAISSE_H
#include<string>

class GestionEntree
{
private:
    int id_;
    double duree_stationment;
public:
    GestionEntree();
    
    int getId();
    void setId(int id);
};



#endif