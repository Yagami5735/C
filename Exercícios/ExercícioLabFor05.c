#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int n;
    printf("Digite um número: ");
    scanf("%d", &n);

    for(int i = 2; i<n; i++)
    {
        int p = n%i;
        if()
    }


    return 0;
}
