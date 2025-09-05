#include <stdio.h>
int main(void)
{
	int nba;
	float prixbase;
	float prixttc;
	float tva = 19.6/100;
	
	printf("Saisissez le nombre d'articles puis le prix  \n");
	scanf("%d", &nba);
	scanf("%f", &prixbase);
	prixttc = prixbase * nba;
	prixttc = prixttc * tva;
	printf("Nombre d'articles : %5d \n prix TTC : %5.2f \n prix HT : %5.2f \n");
	
	return 0;
}
