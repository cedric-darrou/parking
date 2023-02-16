#ifndef CAISSE_H
#define CAISSE_H
#include<string>

class CaisseManuelle
{
private:
    bool presence_surveillant_;
public:
    CaisseManuelle(/* args */);

    bool getPresenceSurveillant();
    void getPresenceSurveillant(bool presenceSurveillant);
    
    
};




#endif