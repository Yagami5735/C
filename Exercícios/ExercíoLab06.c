#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int a, b, c;
    printf("Digite um n�mero: ");
    scanf("%d", &a);
    printf("\nDigite outro n�mero: ");
    scanf("%d", &b);
    if(a == b)
    {
        c = a+b;
        printf("\nC = %d", c);
    }
    else
    {
        c = a*b;
        printf("\nC = %d", c);
    }

    system("pause");

    return 0;
}
