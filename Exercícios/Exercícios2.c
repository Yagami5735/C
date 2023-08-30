#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int aux;
    float a, qt;
    printf("Informe a metragem da parede em m²: ");
    scanf("%f", &a);
    qt = a/3;
    aux = qt;
    if(aux == qt)
    {
        printf("chegou aqui");
        printf("\nIrá precisar de %d galão(ões) de tinta", aux);
        system("pause");
    }
    else
    {
        aux++;
        printf("Irá precisar de %d galão(ões) de tinta", aux);
        system("pause");
    }


    return 0;
}
