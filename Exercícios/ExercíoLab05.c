#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    float a, b, c;
    printf("Digite um n�mero: ");
    scanf("%f", &a);
    printf("\n Digite outro n�mero: ");
    scanf("%f", &b);
    printf("\nDigite outro n�mero: ");
    scanf("%f", &c);

    if((a + b) < c)
    {
        printf("A soma de %0.1f e %0.1f � menor que %0.1f", a, b, c);
    }
    else
    {
        printf("A soma de %0.1f e %0.1f n�o � menor que %0.1f", a, b, c);
    }

    system("pause");

    return 0;
}
