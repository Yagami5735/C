#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int n1, n2, r;
    printf("Digite o valor do primeiro n�mero:");
    scanf("%d", &n1);
    printf("Digite o valor do segundo n�mero:");
    scanf("%d", &n2);
    r = n1%n2;
    printf("O resto da divis�o de %d e %d, � %d", n1, n2, r);
    system("pause");


    return 0;
}
