#include <stdio.h>

int main()
{
    int quantidade, contagem;
    float  MED, NUM, MAX, MIN;
    quantidade = 0;
    MED = 0.0;
    MAX = 0.0;
    MIN = 0.0;
    printf("Insira a quantidade de valores\n");
    scanf_s("%d", &quantidade);
    for (contagem = 0; contagem < quantidade; contagem += 1) {
        if (contagem == 0) {
            printf("Escreva o valor\n");
            scanf_s("%f", &NUM);
            MAX = NUM;
            MIN = NUM;
            MED = MED + NUM;
        }
        else {
            printf("Escreva o valor\n");
            scanf_s("%f", &NUM);
            MED = MED + NUM;
            if (NUM > MAX) {
                MAX = NUM;
            }
            if (NUM < MIN) {
                MIN = NUM;
            }
        }
    }
    MED = MED / quantidade;
    printf("O maior numero e %f\n", MAX);
    printf("O menor numero e %f\n", MIN);
    printf("A media e %f", MED);
    return 0;
}