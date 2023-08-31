#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int n, count;

    do
    {
        printf("\nDigite um número: ");
        scanf("%d", &n);

        if(n >= 0 && n <=25)
        {
            count++;
            printf("\n%d está no intervalo de 0 à 25\n", n);
        }
        else
        {
           if(n >= 26 && n <=50)
            {
                count++;
                printf("\n%d está no intervalo de 26 à 50\n", n);
            }
            else
            {
                if(n >= 51 && n <=75)
                {
                    count++;
                    printf("\n%d está no intervalo de 51 à 75\n", n);
                }
                else
                {
                    if(n >= 76 && n <=100)
                    {
                        count++;
                        printf("\n%d está no intervalo de 76 à 100\n", n);
                    }
                    else
                    {
                        printf("\n%d não está em nenhum dos intevalos\n", n);
                    }
                }
            }
        }
    }while(n>=0);

    printf("\nFoi contado %d números que se encaixaram nos intervalos\n", count);

    return 0;
}
