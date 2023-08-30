#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int hora, min;
    printf("digite a hora: ");
    scanf("%d", &hora);
    min = hora * 60;
    printf("%d hora(s) em munutos é: %d", hora, min);
    system("pause");
    return 0;
}
