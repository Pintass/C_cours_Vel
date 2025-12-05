#include <stdio.h>
#include <stdlib.h>

void saisir_dim_matrice(int* nb_lignes, int* nb_colonnes);
int** alloc_matrice(int nb_lignes, int nb_colonnes);
void desalloc_matrice(int*** tableau2D, int nb_lignes);
void afficher_matrice(int** tableau2D, int nb_lignes, int nb_colonnes);
void saisir_coeffs_tableau(int** tableau2D, int nb_lignes, int nb_colonnes);


int main(void) {
    int nb_lignes = 0;
    int nb_colonnes = 0;

    saisir_dim_matrice(&nb_lignes, &nb_colonnes);
    int** tableau2D = alloc_matrice(nb_lignes, nb_colonnes);
    saisir_coeffs_tableau(tableau2D, nb_lignes, nb_colonnes);
    afficher_matrice(tableau2D, nb_lignes, nb_colonnes);
    desalloc_matrice(&tableau2D, nb_lignes);
}

void saisir_dim_matrice(int* nb_lignes, int* nb_colonnes) 
{
    do 
    {
        printf("Saisissez le nombre de lignes :");
        scanf(" %d", nb_lignes);
    } while (nb_lignes <= 0);

    do 
    {
        printf("Saisissez le nombre de colonnes :");
        scanf(" %d", nb_colonnes);
    } while (nb_colonnes <= 0);
}

int** alloc_matrice(int nb_lignes, int nb_colonnes) 
{
    int** m = NULL; // bonne habitude de tjr donner une valeur
    m = malloc(nb_lignes * sizeof(int*));
    for(int i = 0; i <= nb_lignes; i++) 
    {
        m[i] = (int*) malloc(nb_colonnes * sizeof(int)); // malloc(nb_colonnes*sizeof(int)) = pointeur générique qui renvoie void*, pour ça que l'on mets (int*) avant car le C est un langage très typé
    }
    return m;
}

void desalloc_matrice(int*** tableau2D, int nb_lignes) 
{
    // pour éviter les fruites mémoires, on free les tableaux les plus en profondeur
    for (int i = 0; i <= nb_lignes; i++)
    {
        free((*tableau2D)[i]); // (*m) pour rendre l'opérateur d'accès à l'adresse prioritaire comparé aux crochets.
    }
    // puis le tableau2D
    free(tableau2D);
    *tableau2D = NULL;
    // le pointeur tableau2D pointe désormais vers NULL. Si on laissait en INT** après le return de la fonction, tableau2D pointerait vers un truc inexistant, en faisant int***, tableau2D poi,nte vers invalide donc NULL.
}

void afficher_matrice(int** tableau2D, int nb_lignes, int nb_colonnes)
{
    for (int i=0; i<nb_lignes; i++) {
        for (int j=0; j < nb_colonnes; j++) {
            printf("Valeur (%d,%d) : %d\n", i, j, tableau2D[j][i]);
        }
    }
}

void saisir_coeffs_tableau(int** tableau2D, int nb_lignes, int nb_colonnes) {
    for (int i=0; i < nb_lignes; i++) {
        for (int j=0; j < nb_colonnes; j++) {
            printf("Entrez la valeur (%d,%d) : \n", i, j);
            scanf(" %d", &tableau2D[i][j]);
        } 
    }
}

