#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int n, aux=0;
    printf("Digite um número: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
    {
        aux+=i;
    }
    printf("%d\n", aux);

    return 0;
}
