#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    float a, b, c, perimetro;
    printf("Digite o valor do primeiro lado: ");
    scanf("%f", &a);
    printf("Digite o valor do segundo lado: ");
    scanf("%f", &b);
    printf("Digite o valor do terceiro lado: ");
    scanf("%f", &c);
    perimetro = a + b + c;
    printf("O perímetro do triângulo é: %.1f cm", perimetro);
    system("pause");

    return 0;
}
