#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int a;
    printf("Digite um n�mero inteiro positivo para ver se ele � par ou impar: ");
    scanf("%d", &a);
    if(a < 0)
    {
        printf("� SEU ANIMAL, � UM N�MERO INTEIRO POSITIVO");
    }
    else
    {
        if(a%2 == 0)
        {
            printf("\nEle � par!!!");
        }
        else
        {
            printf("\nEle � impar!!!");
        }
    }

    system("pause");

    return 0;
}
