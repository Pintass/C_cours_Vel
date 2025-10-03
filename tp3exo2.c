#include <stdio.h>
#define TAILLE 11
int main(void) {
	float tab[TAILLE] = {0};
	int taille_effective = 1;
    	int choix;
	float min_courant;
	float temp;
	do{ 
		printf("Veuillez rentrer la taille du tableau, comprise entre 2 et %d inclus :\n", TAILLE);
		scanf("%d", &choix);
	}while (!(choix > 1 && choix <= TAILLE));
	     
    	do{
    		printf("Veuillez rentrer une valeur float, représentant la %d ème valeur sur %d.\n", taille_effective, choix);
    		scanf(" %f", &tab[taille_effective]);
    		taille_effective += 1;
    	} while(taille_effective-1 != choix);
    		
    	printf("Contenu de la table :\n");
    	min_courant = tab[1]; // on met la premiere valeur come minimum afin que le minimum ne soit 0 par défaut.
    	
    	for(int i=1; i<=choix; i++){
    		temp = tab[i];
    		if(tab[i] < min_courant){
    			min_courant = tab[i];
    			printf("min actuel : %f, valeur: %f", min_courant, temp);
    		}
    		printf("\n valeur: %f, position: %d\n",temp, i);
    	}
    	printf("\n Le minimum du tableau est : %f \n", min_courant);
    	
    	return 0;
}
