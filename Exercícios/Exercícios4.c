#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    float salario, per, des, nsalario;
    printf("digite o valor do sal�rio a ser descontado: ");
    scanf("%f", &salario);
    printf("\ndigite o percentual do desconto: ");
    scanf("%f", &per);
    des = salario * (per/100);
    nsalario = salario - des;
    printf("\n\to desconto do sal�rio � de %0.2fR$ e a corre��o do sal�rio � %0.2fR$ \n", des, nsalario);
    system("pause");

    return 0;
}
