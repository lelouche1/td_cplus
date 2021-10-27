#ifndef COMPTEEPARNE_H
#define COMPTEEPARNE_H

#include "Compte.h"

class CompteEpargne: public Compte
{
    public:
        CompteEpargne();
        CompteEpargne(float,int,float);

        ~CompteEpargne();

    protected:
        float taux;

};

#endif // COMPTEEPARNE_H
