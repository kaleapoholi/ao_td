#include <stdio.h>

#define TAILLE 10


// declare les fonctions 
void affiche(int tableau[], int dispo);
int saisie(int tableau[], int dispo);
float moyenne(int tableau[],int dispo);
int find_max(int tableau[],int dispo);
void search(int tableau[],int dispo);

int main(int argc,char *argv[])
{
    printf("vous pouvez: \n 1- saisir des poids \n 2- afficher les poids \n 3-calculer la moyenne des poids \n 4- afficher le poids maximal \n 5- rechercher un poids \n");
    int numero;
    
    int tableau[TAILLE];
    int dispo = TAILLE;
    float moy;
    int max; 
    printf("dispo %d \n",dispo);
    printf("saisir votre choix \n");
    scanf("%d",&numero);
    while (numero!=0){
        switch (numero)
        {
            case 0 : printf("au revoir");break;
            case 1 : dispo=saisie(tableau,dispo);break;
            case 2 : affiche(tableau, dispo); break;
            case 3 : moy= moyenne(tableau, dispo); printf("La moyenne du poids des animaux est de %f \n",moy); break;
            case 4 : max=find_max(tableau, dispo); printf("Le poids maximal des animaux est de %d \n",max); break;
            case 5 : search(tableau, dispo); break;
            default : printf("mauvais choix");
        }
        printf("saisir votre choix \n");
        scanf("%d",&numero);
    }
    
}

int saisie (int tableau[TAILLE], int dispo)
{
    printf("saisie des poids \n");
    int poids;
    printf("dispo %d \n",dispo);
    if (dispo>0){
        while (poids!=0 && dispo!=0 ){
        scanf("%d",&poids);
        tableau[TAILLE-dispo]=poids;
        if (poids==0)
            {
                return dispo;
            }
        else if (dispo<=1){
            printf("plus de places disponible \n");
            return 0;
        }
        else {
            dispo=dispo-1; 
        }
          
        printf("dispo %d \n",dispo);
    }
    }
    else {
        printf("plus de places disponible \n");
        return 0;
    }
    

    /*for(int i=0; i<TAILLE; i++)
        {
            scanf("%d",&poids);
            tableau[i]=poids;
        }*/
}

void affiche (int tableau[TAILLE], int dispo)
{
    printf("affichage des poids \n");
    printf("dispo %d \n",dispo);
    for(int i=0; i<TAILLE-dispo; i++)
        {
        printf("tableau[%d]=",i);
        printf("%d \n",tableau[i]);
        }
}

float moyenne(int tableau[], int dispo){
    float avg=0;
    for(int i=0; i<TAILLE-dispo; i++)
        {
        avg=avg+(float)tableau[i];
       
        }
    return (avg/(TAILLE-dispo));
}

int find_max(int tableau[], int dispo){
    int max=0;
    for(int i=0; i<TAILLE-dispo; i++)
        {
            if (tableau[i]>max){
                max=tableau[i];
            }
        }
    return (max);
}

void search(int tableau[], int dispo){
    int poids;
    int ok=0;
    printf("saisir le poids cherché \n");
    scanf("%d",&poids);
    for(int i=0; i<TAILLE-dispo; i++)
        {
            if (tableau[i]==poids){
                printf("l'animal %d a le poids cherché", i);
                ok=ok+1;
            }
        }
    if (ok==0){
        printf("aucun animal a le poids cherché");
    }
}