#include <stdio.h>

int main()
{
	int esc;
	float cart = 0, valor;

	printf("-=-=-=Banco-=-=-=-\n;");
	printf("[1] adicionar dinheiro.\n[2] remover dinheiro.\n>");
	scanf_s("%d", &esc);

	if (esc == 1) {
		printf("quanto dinheiro pretende adicionar?\n");
		scanf_s("%f", &valor);
		cart = cart + valor;
		printf("saldo atual: %f\n", cart);
	}
	else if (esc = 2) {
		printf("quanto dinheiro pretende retirar?\n");
		scanf_s("%f", &valor);
		cart = cart - valor;
		printf("saldo atual: %f\n", cart);
	}

	while (esc != 3) {
		printf("[1] adicionar dinheiro.\n[2] remover dinheiro.\n[3] sair do banco.\n>");
		scanf_s("%d", &esc);

		if (esc == 1) {
			printf("quanto dinheiro pretende adicionar?\n");
			scanf_s("%f", &valor);
			cart = cart + valor;
			printf("saldo atual: %f\n", cart);
		}
		else if (esc == 2) {
			printf("quanto dinheiro pretende retirar?\n");
			scanf_s("%f", &valor);
			cart = cart - valor;
			printf("saldo atual: %f\n", cart);
		}
		else if (esc > 3 || esc < 1) {
			printf("Ocorreu um erro. Talvez tenha escrito um valor inesperado.\n");
		}
	}
}