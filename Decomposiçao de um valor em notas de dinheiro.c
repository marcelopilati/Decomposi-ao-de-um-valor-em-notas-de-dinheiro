#include <stdio.h>
void main(){

    int notas100, notas50, notas20, notas10, notas5, notas2, notas1, valor;

    printf("Insira um valor de reais: ");
    scanf("%d", &valor);

    notas100 = valor / 100;
    valor = valor - (notas100 * 100); //divisao inteira para descobrir o numero de notas

    notas50 = valor / 50;
    valor = valor - (notas50 * 50);

    notas20 = valor / 20;
    valor = valor - (notas20 * 20);

    notas10 = valor / 10;
    valor = valor - (notas10 * 10);

    notas5 = valor / 5;
    valor = valor - (notas5 * 5);

    notas2 = valor / 2;
    valor = valor - (notas2 * 2);

    notas1 = valor / 1;
    valor = valor - (notas1 * 1);

    printf("Valor decomposto: %d\n", valor );
    printf("Notas de cem: %d\n", notas100);
    printf("Notas de cinquenta: %d\n", notas50);
    printf("Notas de vinte: %d\n", notas20);
    printf("Notas de dez: %d\n", notas10);
    printf("Notas de cinco: %d\n", notas5);
    printf("Notas de dois: %d\n", notas2);
    printf("Moedas de um real: %d\n", notas1);

}
