#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    float salario, per, des, nsalario;
    printf("digite o valor do salário a ser descontado: ");
    scanf("%f", &salario);
    printf("\ndigite o percentual do desconto: ");
    scanf("%f", &per);
    des = salario * (per/100);
    nsalario = salario - des;
    printf("\n\to desconto do salário é de %0.2fR$ e a correção do salário é %0.2fR$ \n", des, nsalario);
    system("pause");

    return 0;
}
