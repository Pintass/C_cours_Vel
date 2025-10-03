#include <stdio.h>
#define TAILLE 11
int main(void) {
	float tabUn[TAILLE] = {1,2,3,4,5,6,80,88,90,1000,9200};
	float tabDeux[TAILLE] = {1,2,3,4,5,6,7,8,9,10,9202};
	int taille_effective = 1;
	float tabFusion[TAILLE*2] = {0};
	float elementUn;
	float elementDeux;
	
	for (int i=1; i<TAILLE; i++) {
		elementUn = tabUn[i];
		if(tabUn[i+1] < elementUn && !(i+1> TAILLE)) 
		{
			printf("Tab1 pas dans l'ordre, %f, %f", elementUn, tabUn[i+1]);
			return 0;
		} 
		
		
		elementDeux = tabDeux[i];
		if(tabDeux[i+1] < elementDeux && !(i+1> TAILLE)) 
		{
			printf("Tab2 pas dans l'ordre");
			return 0;
		}
	} // si le programme est toujours en route, c'est que les tab sont bels et biens dans l'ordre croissant. On en informe alors l'user : 
	
	printf("---- Vérification des tables CHECK ----");
	for (int i=1; i<TAILLE; i++) {
		elementUn = tabUn[i];
		for(int j=i+1; j<TAILLE; i++) {
			if(tabUn[j] < elementUn) 
			{
				elementUn = tabUn[j];
			}
		}
		
		elementDeux = tabDeux[i];
		for(int j=i+1; j<TAILLE; i++) {
			if(tabDeux[j] < elementDeux) 
			{
				elementDeux = tabDeux[j];
			}
		}
		if (elementUn > elementDeux) 
		{
			tabFusion[taille_effective] = elementUn;
			tabFusion[taille_effective] = elementDeux;
		} else {
			tabFusion[taille_effective] = elementDeux;
			tabFusion[taille_effective] = elementUn;
		}
		
		
	}
	
	printf("Contenu de la table Fusion :\n");
    	for(int i=1; i<=TAILLE; i++){
    		printf("\n valeur: %f, position: %d\n",tabFusion[i], i);
    	}
	
    	return 0;
}
