#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int num, res1, res2, soma;
    printf("Digite um n�mero: ");
    scanf("%d", &num);
    res1 = (num * 3) + 1;
    res2 = (num * 2) - 1;
    soma = res1+res2;
    printf("a Soma do sucessor do triplo(%d) com o antecessor(%d) deste mesmo n�mero � %d", res1, res2, soma);
    system("pause");

    return 0;
}
