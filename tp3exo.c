#include <stdio.h>
#define TAILLE 11
int main(void) {
	int tab[TAILLE] = {0};
	int taille_effective = 1;
    	int choix;

	do{ 
		printf("Veuillez rentrer la taille du tableau, comprise entre 2 et 10 inclus :\n");
		scanf("%d", &choix);
	}while (!(choix > 1 && choix < 11));
	     
    	do{
    		printf("Veuillez rentrer une valeur, représentant la %d ème valeur sur %d.\n", taille_effective, choix);
    		scanf(" %d", &tab[taille_effective]);
    		taille_effective += 1;
    	} while(taille_effective-1 != choix);
    		
    	printf("Contenu de la table :\n");
    	for(int i=1; i<=choix; i++){
    		printf("\n valeur: %d, position: %d\n",tab[i], i);
    	}
}
