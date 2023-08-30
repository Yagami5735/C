#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    float area, b, h;
    printf("Digite o valor da base: ");
    scanf("%f", &b);
    printf("Digite o valor da altura: ");
    scanf("%f", &h);
    area = (b*h)/2;
    printf("A área deste triângulo é %.1f", area);

    return 0;
}
