#ifndef __PATHWAY__
#define __PATHWAY__

typedef struct pathway * p_pathway;
extern p_pathway ajouter_enzyme(p_pathway pathway);
//extern p_pathway ajouter_premier(p_enzyme enzyme);
extern p_pathway tete_liste();
extern void ajouter(p_pathway pathway, p_enzyme enzyme);
extern void affiche_pathway(p_pathway pathway);
extern float moyenne(p_pathway pathway);
extern int find_max(p_pathway pathway);
extern void search(p_pathway pathway);
extern int strcmp(const char*chaine1, const char*chaine2);
p_pathway supprime(p_pathway pathway);

#endif