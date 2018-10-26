#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "enzyme.h"

struct enzyme{
  int poids;
  char* nom; 
};

char* creer_nom (){
    printf("entrer un nom \n");
    char *name;
    char chaine[256];
    scanf ("%s", chaine);
    name=(char*)malloc(sizeof(strlen(chaine)+1));
    strcpy(name,chaine);
    return (name);
}

p_enzyme creer_enzyme(){
    int poids;
    p_enzyme enz=(p_enzyme)malloc(sizeof(struct enzyme));
    printf("entrer un poids \n");
    scanf("%d", &poids); 
    enz->poids=poids;
    enz->nom=creer_nom();
    return enz;
}

void affiche_enzyme(p_enzyme enz){
  printf(" mon enzyme %s ",enz->nom);
  printf(" %d \n",enz->poids);
}

int retourne_poids(p_enzyme enz){
  return enz->poids;
}

char* retourne_name(p_enzyme enz){
  return enz->nom;
}