#include <stdio.h>
#include "enzyme.h"
#include "pathway.h"


int main(int argc, char *argv[]){
    printf("vous pouvez: \n 1- saisir des enzymes \n 2- afficher les enzymes \n 3-calculer le poids moyen des enzymes \n 4- afficher l'enzyme ayant le poids max \n 5- rechercher une enzyme \n 6- supprimer une enzyme \n");
    int numero;
    p_pathway pathway=NULL;
    pathway=tete_liste();
    float moy;
    int max; 
    
    printf("saisir votre choix \n");
    scanf("%d",&numero);
    while (numero!=0){
        switch (numero)
        {
            case 0 : printf("au revoir");break;
            case 1 : pathway= ajouter_enzyme(pathway); break;
            case 2 : affiche_pathway(pathway); break;
            case 3 : moy= moyenne(pathway); printf("La moyenne du poids des enzymes est de %f \n",moy); break;
            case 4 : max=find_max(pathway); printf("Le poids maximal des animaux est de %d \n",max); break;
            case 5 : search(pathway); break;
            case 6 : pathway=supprime(pathway);break;
            default : printf("mauvais choix");
        }
        printf("saisir votre choix \n");
        scanf("%d",&numero);
    }
}

