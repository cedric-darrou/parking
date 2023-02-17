#include "../libs.hpp"
#include "Caisse.hpp"

#ifndef CAISSEMANUELLE_H
#define CAISSEMANUELLE_H

class CaisseManuelle : public Caisse {
private:
    bool presence_surveillant_;
public:
    CaisseManuelle();
    ~CaisseManuelle();

    bool getPresenceSurveillant();
    void getPresenceSurveillant(bool presenceSurveillant);
};

#endif