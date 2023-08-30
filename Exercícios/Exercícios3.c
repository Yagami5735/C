#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    float v, d;
    printf("digite o valor em reais");
    scanf("%f", &v);
    d = v/4.9;
    printf("%0.2f R$ em dólares fica: %0.2f USD", v, d);
    system("pause");

    return 0;
}
