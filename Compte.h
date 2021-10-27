#ifndef COMPTE_H
#define COMPTE_H

#include <iostream>

using namespace std;

class Compte
{
    public:
        Compte();
        Compte(int, float);
        float get_solde(){ return solde; }
        int get_RIB(){ return RIB; }
        void set_solde(float m){ solde = m; }
        void deposer_argent(float);
        bool retirer_argent(float);
        void afficher();
        ~Compte();

    protected:
        int RIB;
        float solde;
};

#endif // COMPTE_H
