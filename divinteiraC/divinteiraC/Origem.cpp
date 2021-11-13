#include <stdio.h>

int main()
{
	int n1, n2, resto, quociente;
	printf("primeiro numero:\n");
	scanf_s("%i", &n1);
	printf("segundo numero:\n");
	scanf_s("%i", &n2);
	resto = n1 % n2;
	quociente = n1 / n2;
	printf("resto = %i\nquociente = %i\n", resto, quociente);
	return 0;
}