#include <stdio.h>
int main(void)
{
	unsigned char a = 2.0;
	unsigned char b = 3.0;
	unsigned char c = 5.0;
	float resultat;
	
	printf("Les valeurs sont : %d , %d , %d \n", a, b,c);
	resultat = a+b+c;
	resultat = resultat/3.0;
	printf("La moyenne de %d , %d , %d est : %f \n", a,b,c,resultat);
	return 0;
}
