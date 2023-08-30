#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int num1, dobro;
    printf("Digite o número: ");
    scanf("%d", &num1);
    dobro = num1 * 2;
    printf("o dobro do número %d é %d", num1, dobro);
    system("pause");

    return 0;
}
