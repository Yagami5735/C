#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int aux;
    float a, qt;
    printf("Informe a metragem da parede em m�: ");
    scanf("%f", &a);
    qt = a/3;
    aux = qt;
    if(aux == qt)
    {
        printf("chegou aqui");
        printf("\nIr� precisar de %d gal�o(�es) de tinta", aux);
        system("pause");
    }
    else
    {
        aux++;
        printf("Ir� precisar de %d gal�o(�es) de tinta", aux);
        system("pause");
    }


    return 0;
}
