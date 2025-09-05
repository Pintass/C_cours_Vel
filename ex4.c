#include <stdio.h>
int main(void)
{
	int temperatureCelsius;
	int temperatureFahreneit;
	
	printf("Saisissez une température en Celsius \n");
	scanf("%d", &temperatureCelsius);
	temperatureFahreneit = 9.0/5*temperatureCelsius + 32;
	printf("F = %d", temperatureFahreneit);
	
	return 0;
}
