#ifndef __LISTE__
#define __LISTE__

typedef struct liste * p_liste;
extern void ajouter(p_liste, int);
extern p_liste ajouter_premier(int);
extern void affiche(p_liste);
extern p_liste supprime(int,p_liste);

#endif
