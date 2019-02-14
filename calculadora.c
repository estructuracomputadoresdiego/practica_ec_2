#include <stdio.h>
int main(int argc, char const *argv[])
{
	int num1,num2,suma;
	printf("Dame un nº\n");
	scanf ("%d", &num1);
	printf("Dame otro nº\n");
	scanf ("%d", &num2);
	suma = num1 + num1;
	printf("%d + %d = %d \n", num1, num2, suma );
	return 0;
}