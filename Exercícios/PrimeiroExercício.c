#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int num1, dobro;
    printf("Digite o n�mero: ");
    scanf("%d", &num1);
    dobro = num1 * 2;
    printf("o dobro do n�mero %d � %d", num1, dobro);
    system("pause");

    return 0;
}
