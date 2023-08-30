#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int a;
    printf("Digite um número: ");
    scanf("%d", &a);
    if(a > 0)
    {
        printf("\nEle é positivo");
    }
    else
    {
        if(a == 0)
        {
            printf("%d é nulo", a);
        }
        else
        {
            printf("\nEle é negativo");
        }
    }

    system("pause");

    return 0;
}
