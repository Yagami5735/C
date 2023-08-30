#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int n;
    printf("Digite um número: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
    {
        if(n%i == 0)
        {
            printf("\n%d", i);
        }
    }

    system("pause");

    return 0;
}
