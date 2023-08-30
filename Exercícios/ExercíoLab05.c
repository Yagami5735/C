#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    float a, b, c;
    printf("Digite um número: ");
    scanf("%f", &a);
    printf("\n Digite outro número: ");
    scanf("%f", &b);
    printf("\nDigite outro número: ");
    scanf("%f", &c);

    if((a + b) < c)
    {
        printf("A soma de %0.1f e %0.1f é menor que %0.1f", a, b, c);
    }
    else
    {
        printf("A soma de %0.1f e %0.1f não é menor que %0.1f", a, b, c);
    }

    system("pause");

    return 0;
}
