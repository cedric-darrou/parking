#include "CaisseManuelle.hpp"
#include<iostream>
using namespace std;

CaisseManuelle::CaisseManuelle();

    bool CaisseManuelle::getPresenceSurveillant() { return presence_surveillant_}
    void CaisseManuelle::getPresenceSurveillant(bool presenceSurveillant){
        presence_surveillant_ = presenceSurveillant;

    }