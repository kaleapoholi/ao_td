#include <stdio.h>
#include <stdlib.h>
#include "list.h"
// Pas de méthode dans le fichier.c

struct liste{
  int val;
  p_liste next; // next c'est un pointeur du list
};

void ajouter(p_liste maliste, int nb){
  p_liste temp = (p_liste)malloc(sizeof(struct liste));
  // On utilise la taille de la structure et non celle du pointeur de la structure
  temp->val=nb;
  temp->next=NULL;

  while (maliste->next) {
    maliste=maliste->next;
  }
  maliste->next=temp;
}

p_liste ajouter_premier(int nb){
  p_liste temp = (p_liste)malloc(sizeof(struct liste));
  temp->val=nb;
  temp->next=NULL;
  return temp;
}

void affiche(p_liste maliste){
  printf(" ma liste \n%d \n",maliste->val);
  while (maliste->next) {
    maliste=maliste->next;
    printf("%d \n",maliste->val);
  }
}

p_liste supprime(int val, p_liste maliste){
  p_liste courant= maliste;

  if (maliste->val==val){
    courant=maliste->next;
    free(maliste);
    maliste=courant;
  }
  while (courant->next) {
      p_liste prec = courant;
      courant = courant->next;
      if (courant->val == val) {
        prec->next=courant->next;
        free(courant);
      }
    }
  return maliste;
  
}