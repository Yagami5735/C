#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int dia;
    printf("Digite o n�mero referente ao dia da semana: ");
    scanf("%d", &dia);

    switch(dia)
    {
        case 1:
            printf("Domingo");
            break;

        case 2:
            printf("Segunda-feira");
            break;

        case 3:
            printf("Ter�a-feira");
            break;

        case 4:
            printf("Quarta-feira");
            break;

        case 5:
            printf("Quinta-feira");
            break;

        case 6:
            printf("Sexta-feira");
            break;

        case 7:
            printf("S�bado");
            break;

        default:
            printf("Hahaha, bob�o!");

    }

    return 0;
}
