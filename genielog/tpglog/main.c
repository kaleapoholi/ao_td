#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "print.h"

int main(int argc, char * argv[]){
    char cwd[256];
    printf("chemin utilisé pour lancer l'exécutable %s\n", argv[0]);
    printf("chemin vers le dossier de travail de l'exécutable %s\n", getcwd(cwd,256));
    printf("contenu de la variable PATH %s\n", getenv("PATH"));
    printf("contenu de la variable LD_LIBRARY_PATH %s\n", getenv("LD_LIBRARY_PATH"));
    print();
}

