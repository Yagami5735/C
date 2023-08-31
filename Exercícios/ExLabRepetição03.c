#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int n, count;

    do
    {
        printf("\nDigite um n�mero: ");
        scanf("%d", &n);

        if(n >= 0 && n <=25)
        {
            count++;
            printf("\n%d est� no intervalo de 0 � 25\n", n);
        }
        else
        {
           if(n >= 26 && n <=50)
            {
                count++;
                printf("\n%d est� no intervalo de 26 � 50\n", n);
            }
            else
            {
                if(n >= 51 && n <=75)
                {
                    count++;
                    printf("\n%d est� no intervalo de 51 � 75\n", n);
                }
                else
                {
                    if(n >= 76 && n <=100)
                    {
                        count++;
                        printf("\n%d est� no intervalo de 76 � 100\n", n);
                    }
                    else
                    {
                        printf("\n%d n�o est� em nenhum dos intevalos\n", n);
                    }
                }
            }
        }
    }while(n>=0);

    printf("\nFoi contado %d n�meros que se encaixaram nos intervalos\n", count);

    return 0;
}
