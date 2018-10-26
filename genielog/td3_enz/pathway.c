#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "enzyme.h"
#include "pathway.h"

struct pathway{
    p_enzyme enz;
    p_pathway next;
};

int strcmp(const char*chaine1, const char*chaine2);

p_pathway ajouter_enzyme(p_pathway pathway){
  int numero;
  printf("Saisir une nouvelle enzyme ? 1-oui 0-non \n");
  scanf("%d", &numero);
  while (numero){
    printf("entrer une enzyme \n");
    p_enzyme enzyme=NULL;
    enzyme=creer_enzyme();
    ajouter(pathway, enzyme);
    printf("Saisir une nouvelle enzyme ? 1-oui 0-non \n");
    scanf("%d", &numero);
  }
  return pathway;
}

p_pathway tete_liste(){
  p_pathway tete = (p_pathway)malloc(sizeof(struct pathway));
  tete->enz=NULL;
  tete->next=NULL;
  return tete;
}

/*p_pathway ajouter_premier(p_enzyme enzyme){
  p_pathway temp = (p_pathway)malloc(sizeof(struct pathway));
  temp->enz=enzyme;
  temp->next=NULL;
  return temp;
}*/

void ajouter(p_pathway pathway, p_enzyme enzyme){
  p_pathway temp = (p_pathway)malloc(sizeof(struct pathway));
  
  temp->enz=enzyme;
  temp->next=NULL;

  while (pathway->next) {
    pathway=pathway->next;
  }
  pathway->next=temp;
}

void affiche_pathway(p_pathway pathway){
  printf(" ma liste d'enzyme\n");
  while (pathway->next) {
    pathway=pathway->next;
    affiche_enzyme(pathway->enz);
  }
}

float moyenne(p_pathway pathway){
    int avg=0;
    int cpt=0;
    int poids=0;
    while(pathway->next){ 
      pathway=pathway->next;
      cpt=cpt+1;
      poids=retourne_poids(pathway->enz);
      avg=avg+poids;
    }
    return ((float)avg/(float)cpt);
}


int find_max(p_pathway pathway){
    int max=0;
    while(pathway->next)
      {
        pathway=pathway->next;
        p_enzyme current_enz=pathway->enz;
        if (retourne_poids(current_enz)>max){
          printf("%d",retourne_poids(current_enz));
          max=retourne_poids(current_enz);
        }
      }
    return (max);
}

void search(p_pathway pathway){
    char* searchenz=creer_nom ();
    int ok=0;
    while(pathway->next)
      {
        pathway=pathway->next;
        p_enzyme current_enz=pathway->enz;
        if (strcmp(retourne_name(current_enz),searchenz)==0){
          printf("enzyme trouvée \n");
          ok=ok+1;
        }
      }
    if (ok==0){
        printf("aucune enzyme trouvée");
    }
}

p_pathway supprime(p_pathway pathway){
  p_pathway courant= pathway;
  char* searchenz=creer_nom ();
  p_enzyme current_enz=courant->enz;
  if (current_enz==NULL){
    courant=pathway->next;
    free(pathway->next);
    pathway=courant;
    printf("enzyme supprimée \n");
  }

  while (courant->next) {
      p_pathway prec = courant;
      courant = courant->next;
      p_enzyme current_enz=courant->enz;
      if (strcmp(retourne_name(current_enz),searchenz)==0){
        prec->next=courant->next;
        free(courant);
        printf("enzyme supprimée \n");
      }
    }
  return pathway;
  
}