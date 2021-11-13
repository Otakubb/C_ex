#include <stdio.h>

int main()
{
	float P, A, IMC, Pi, Pperder, Pganhar;

	printf("altura(m):\n");
	scanf_s("%f", &A);
	printf("peso(kg):\n");
	scanf_s("%f", &P);                                 //este bloco calcula o IMC
	IMC = P / (A * A);
	printf("O IMC equivale a %f\n", IMC);

	if (IMC > 24.9) {

		Pi = 24.9 * (A * A);
		Pperder = P - Pi;                              // Este bloco calcula o peso que a pessoa tem de perder, tendo como IMC ideal 24.9(máximo da zona saudável).
		printf("Tens de perder %f kg\n", Pperder);
	}
	else {
		if (IMC < 18.5) {

			Pi = 18.5 * (A * A);
			Pganhar = (Pi - P) + P;					   //Este bloco calcula o peso a ganhar, Tendo IMC ideal como 18.5 (minimo da zona saudável).
			printf("Tens de ganhar %f kg", Pganhar);

		}
	}

	return 0;
}