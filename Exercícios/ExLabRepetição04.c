#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int n, count=0;

    printf("Digite um n�mero: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
    {
        if(n%i == 0)
        {
            count++;
            printf("\n%d � um divisor de %d\n", i, n);
        }
    }



    return 0;
}
