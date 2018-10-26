#include<stdio.h>

// declare les fonctions 
void affiche();

int main(int argc,char *argv[])
{
    //printf("hello world \n");

    if (argc==1){
        printf("hello tout le monde \n");
    }
    else{
        for(int i=1; i<argc; i++)
        {
        printf("hello %s \n",argv[i]);
        }
        /*int j=argc;
        while(j>1){
            j=j-1;
            printf("hello %s \n",argv[j]);
        }*/
    }
    
    affiche();
    //exit(0);
}

void affiche ()
{
    printf(" au revoir");
}