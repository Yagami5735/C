#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    float x, y, z;
    printf("Digite um valor para a coordenada X: ");
    scanf("%f", &x);
    printf("\n Digite um valor para a coordenada Y: ");
    scanf("%f", &y);
    printf("\nDigite um valor para a coordenada Z: ");
    scanf("%f", &z);

    if(((x >= z) && (y <= z)) || ((x <= z) && (y >= z)))
    {
        printf("\n%0.1f está no intervalo e %0.1f e %0.1f", z, x, y);
    }
    else
    {
        printf("\n%0.1f não está no intervalo entre %0.1f e %0.1f", z, x, y);
    }

    system("pause");

    return 0;
}
