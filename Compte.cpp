#include "Compte.h"

Compte::Compte()
{
    RIB = 0;
    solde = 0;
    //ctor
}
//------------------------------------------------------
Compte::Compte(int n, float m)
{
    RIB = n;
    solde = m;
}
//------------------------------------------------------
void Compte::deposer_argent(float m)
{
    if(m>0)
        solde +=m;
}
//----------------------------------------------------
 bool Compte::retirer_argent(float s)
 {
     if(get_solde() >= s)
     {
         set_solde(get_solde()-s);
         return true;
     }
    else
        return false;
 }
//-----------------------------------------------------
void Compte::afficher()
{
    cout << "RIB: " << get_RIB() <<"\t SOLDE: " << get_solde()<< endl;
}
//-----------------------------------------------------------
Compte::~Compte()
{
    //dtor
}
