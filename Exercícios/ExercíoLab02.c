#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int a;
    printf("Digite um n�mero: ");
    scanf("%d", &a);
    if(a > 0)
    {
        printf("\nEle � positivo");
    }
    else
    {
        if(a == 0)
        {
            printf("%d � nulo", a);
        }
        else
        {
            printf("\nEle � negativo");
        }
    }

    system("pause");

    return 0;
}
