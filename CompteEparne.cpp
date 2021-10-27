#include "CompteEparne.h"

CompteEpargne::CompteEpargne(): Compte(5,0)
{
    taux = 0;
}

CompteEpargne::CompteEpargne(float s,int r,float t): Compte(s,r)
{
    taux =0;
}
CompteEpargne::~CompteEpargne()
{
    //dtor
}
