#include <stdio.h>
#include <stdlib.h>

void lire_tableau2D(int** tab2D, int nb_lignes, int nb_colonnes);

int main(void) {
    int nb_lignes = 4;
    int nb_colonnes = 4;
    int** tab2D = NULL;

    // Allouer
    tab2D = (int**) malloc(nb_lignes*sizeof(int*));

    for(int i=0;i<nb_colonnes;i++) {
        tab2D[i] =(int*) malloc(nb_colonnes*sizeof(int));
    }

    //Entrer les données
    for (int i=0; i<nb_lignes; i++) {
        for (int j=0; j < nb_colonnes; j++) {
            printf("Entrez la valeur %d:%d : \n", i, j);
            scanf(" %d", &tab2D[i][j]);
        }
    }

    //Lire les données
    lire_tableau2D(tab2D, nb_lignes, nb_colonnes);

    // Pour désallouer : 
    for(int i = 0;i<nb_lignes;i++) {
        free(tab2D[i]);
    }
    
    free(tab2D);

}

void lire_tableau2D(int** tab2D, int nb_lignes, int nb_colonnes) {
    for (int i=0; i<nb_lignes; i++) {
        for (int j=0; j < nb_colonnes; j++) {
            printf("Valeur %d:%d: %d\n", i, j, tab2D[j][i]);
        }
    }
}

void 