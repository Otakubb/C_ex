#include <stdio.h>

int main()
{
	float dias, preco = 50, desc;
	printf("quantos dias vai ficar no hotel?\n");
	scanf_s("%f", &dias);
	preco = preco * dias;
	if (dias>=5 && dias<10) {
		desc = preco * (3.0 / 100.0);
		preco = preco - desc;
		printf("total a pagar: %f", preco);
	}
	else {
		if (dias >= 10 && dias<15) {
			desc = preco * (10.0 / 100.0);
			preco = preco - desc;
			printf("total a pagar: %f", preco);
		}
		else {
			if (dias >= 15 && dias < 30) {
				desc = preco * (14.0 / 100.0);
				preco = preco - desc;
				printf("total a pagar: %f", preco);
			}
			else {
				if (dias > 30) {
					printf("O limite de estadia e de 30 dias.");
				}
			}
		}
	}

	return 0;
}