#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    float a, b;
    printf("Digite um número: ");
    scanf("%f", &a);
    printf("\nDigite outro número: ");
    scanf("%f", &b);
    if(a > b)
    {
        printf("\n%0.1f é maior que %0.1f", a, b);
    }
    if(a < b)
    {
        printf("\n%0.1f é maior que %0.1f", b, a);

    }
    if(a == b)
    {
        printf("\n%0.1f é igual a %0.1f, por favor digite números diferentes entre si", a, b);
    }

    system("pause");

    return 0;
}
