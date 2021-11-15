#include <stdio.h>

int main()
{
#define PI 3.141592
	float comp, r;
	printf("comprimento da cerca:");
	scanf_s("%f", &comp);
	comp = comp * 2;
	r = comp / 6.3;
	printf("O valor maximo do raio e: %f", r);
	return 0;
}