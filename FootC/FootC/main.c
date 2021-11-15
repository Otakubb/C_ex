#include <stdio.h>

int main()
{
	int MyPts, AdvPts, jorn, qtd;

	printf("Pontos da sua equipa:\n");
	scanf_s("%i", &MyPts);
	printf("Pontos da equipa adversaria\n");
	scanf_s("%i", &AdvPts);
	printf("jornadas restantes\n");
	scanf_s("%i", &jorn);

	qtd = jorn * 3;
	if (MyPts > AdvPts) {
		AdvPts = AdvPts + qtd;
		if (MyPts > AdvPts) {
			printf(":D");
		}
		else {
			printf(":)");
		}
	}
	else {
		MyPts = MyPts + qtd;
		if(AdvPts>MyPts) {
			printf(":(");
			
		}
		else {
			printf(":\\");
		}
	}

	return 0;
}