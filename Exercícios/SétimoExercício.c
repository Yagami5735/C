#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    float lado, vol;
    printf("Digite o valor de um dos lados do cubo: ");
    scanf("%f", &lado);
    vol = pow(lado, 3);
    printf("O volume deste cubo �: %.1f cm�", vol);
    system("pause");

    return 0;
}
