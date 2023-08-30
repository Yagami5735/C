#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int a;
    printf("Digite um número: ");
    scanf("%d", &a);
    if(a%5 == 0)
    {
        printf("\n%d é multiplo de 5", a);
    }
    else
    {
        printf("\n%d não é multiplo de 5", a);
    }

    system("pause");

    return 0;
}
