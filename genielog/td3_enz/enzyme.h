#ifndef __ENZYME__
#define __ENZYME__

typedef struct enzyme * p_enzyme;

extern char* creer_nom ();
extern p_enzyme creer_enzyme();
extern void affiche_enzyme(p_enzyme enz);
extern int retourne_poids(p_enzyme enz);
extern char* retourne_name(p_enzyme enz);

#endif