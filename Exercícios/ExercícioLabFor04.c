#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int n1, n2;
    printf("Digite um n�mero: ");
    scanf("%d", &n1);
    printf("Digite outro n�mero: ");
    scanf("%d", &n2);

    if(n1 > n2)
    {
      for(n2; n2<=n1; n2++)
      {
          printf("\n%d", n2);
      }
    }
    else
    {
        if(n1 != n2)
        {
            for(n1; n1<=n2; n1++)
            {
                printf("\n%d", n1);
            }
        }
        else
        {
            printf("N�o use n�meros iguais por favor");
        }

    }

    return 0;
}
