#include <stdio.h>

int main(int argc, char const *argv[])

{
	float km, yd, pies, millas;
	printf("Dime cuantos km quieres pasar a yardas millas y pies\n");	
	scanf("%f", &km);

	yd=km*100000/91.44;
	pies=km*100000/30.48;
	millas=km/1.60;

	printf("%f km son %.6f yardas\n%f km son %.6f pies \n%f km son %.6f millas\n",km ,yd , km, pies, km, millas );

	return 0;
}