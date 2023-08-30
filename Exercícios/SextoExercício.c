#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    float salario, reajuste, novoSalario;
    printf("Digite o valor do salário atual: ");
    scanf("%f", &salario);
    printf("Digite o valor do reajuste em porcentagem: ");
    scanf("%f", &reajuste);
    novoSalario = (salario * (reajuste/100)) + salario;
    printf("O salário com o reajuste é:R$%.2f ", novoSalario);
    system("pause");

    return 0;
}
