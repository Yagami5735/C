#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    float a, b;
    printf("Digite um n�mero: ");
    scanf("%f", &a);
    printf("\nDigite outro n�mero: ");
    scanf("%f", &b);
    if(a > b)
    {
        printf("\n%0.1f � maior que %0.1f", a, b);
    }
    if(a < b)
    {
        printf("\n%0.1f � maior que %0.1f", b, a);

    }
    if(a == b)
    {
        printf("\n%0.1f � igual a %0.1f, por favor digite n�meros diferentes entre si", a, b);
    }

    system("pause");

    return 0;
}
