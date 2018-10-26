#include <stdio.h>
#include "list.h"

int main(int argc, char *argv[]){
  // struct list * maliste=NULL;
  p_liste maliste=NULL;
  // maliste est un pointeur de liste
  int numero;
  printf("Donnez un nb \n");
  scanf("%d", &numero);
  while (numero) {
    if (!(maliste)) {
      maliste = ajouter_premier(numero);
    }
    else{ajouter(maliste, numero);}
    printf("Donnez un nb %s\n");
    scanf("%d", &numero);
  }
  affiche(maliste);
  int sup;
  printf("Donnez un nb \n");
  scanf("%d", &sup);
  maliste=supprime(sup,maliste);
  affiche(maliste);
}
