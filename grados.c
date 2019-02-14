#include <stdio.h>

int main(int argc, char const *argv[])
{
	int celsius, kelvin, converso;
		
	converso=0;
	printf("Dime cuantos celsius\n");
	scanf ("%d", &celsius);
	converso = -273 + celsius;
	printf("%d grados celsius equivalen a %d grados kelvin\n", celsius, converso );
	return 0;
}