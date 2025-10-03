#include <stdio.h>
#define TAILLE 11
int main(void) {
	float tab[TAILLE] = {0};
	int taille_effective = 1;
	int taille_effective_positifs = 1;
	int taille_effective_negatifs = 1;
    	int choix;
	float positifs[TAILLE] = {0};
	float negatifs[TAILLE] = {0};
	do{ 
		printf("Veuillez rentrer la taille du tableau, comprise entre 2 et %d inclus :\n", TAILLE);
		scanf("%d", &choix);
	}while (!(choix > 1 && choix <= TAILLE));
	     
    	do{
    		printf("Veuillez rentrer une valeur float, représentant la %d ème valeur sur %d.\n", taille_effective, choix);
    		scanf(" %f", &tab[taille_effective]);
    		taille_effective += 1;
    	} while(taille_effective-1 != choix);
    		
    	
    	for(int i=1; i<=choix; i++){
    		if(tab[i] < 0.0){
    			negatifs[taille_effective_negatifs] = tab[i];
    			taille_effective_negatifs += 1;
    		} else if (tab[i] > 0.0) 
    		{
    			positifs[taille_effective_positifs] = tab[i];
    			taille_effective_positifs += 1;
    		}
    	}
    	
    	taille_effective_positifs -= 1; // afin d'éviter des 0 n'étant pas dans la taille effective car on avance de 1 de trop.
    	taille_effective_negatifs -= 1; // afin d'éviter des 0 n'étant pas dans la taille effective car on avance de 1 de trop.
    	
	printf("Contenu de la table positifs :\n");
    	for(int i=1; i<=taille_effective_positifs; i++){
    		printf("\n valeur: %f, position: %d\n",positifs[i], i);
    	}
    	printf("Nombre de positifs : %d", taille_effective_positifs);
    	
    		printf("Contenu de la table négatifs :\n");
    	for(int i=1; i<=taille_effective_negatifs; i++){
    		printf("\n valeur: %f, position: %d\n",negatifs[i], i);
    	}
    	printf("Nombre de négatifs : %d", taille_effective_negatifs);
    	
    	return 0;
}
