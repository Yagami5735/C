#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int num, aux, maior, menor;

    do
    {
        scanf("%d", &num);
        if(num<10)
        {
            printf("Número inválido!\n");
        }

    }while(num<10);

    scanf("%d", &aux);
    maior = aux;
    menor = aux;

    for(int i=1; i<=num; i++)
    {
        scanf("%d", &aux);
        if(aux > maior)
        {
            maior = aux;
        }
        else
        {
            if(aux < menor)
            {
                menor = aux;
            }
        }
        printf("\nmaior = %d, menor = %d\n", maior, menor);
        menor=maior=0;
    }




    return 0;
}
