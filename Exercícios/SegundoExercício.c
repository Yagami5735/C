#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int num, ant, suc;
    printf("Digite o n�mero: ");
    scanf("%d", &num);
    ant = num - 1;
    suc = num + 1;
    printf("O antecessor de %d � %d e o sucessor � %d", num, ant, suc);
    system("pause");

    return 0;
}
