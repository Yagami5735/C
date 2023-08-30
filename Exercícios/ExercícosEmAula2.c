#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int a;
    printf("Digite um número inteiro positivo para ver se ele é par ou impar: ");
    scanf("%d", &a);
    if(a < 0)
    {
        printf("Ô SEU ANIMAL, É UM NÚMERO INTEIRO POSITIVO");
    }
    else
    {
        if(a%2 == 0)
        {
            printf("\nEle é par!!!");
        }
        else
        {
            printf("\nEle é impar!!!");
        }
    }

    system("pause");

    return 0;
}
