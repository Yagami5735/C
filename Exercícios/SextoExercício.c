#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    float salario, reajuste, novoSalario;
    printf("Digite o valor do sal�rio atual: ");
    scanf("%f", &salario);
    printf("Digite o valor do reajuste em porcentagem: ");
    scanf("%f", &reajuste);
    novoSalario = (salario * (reajuste/100)) + salario;
    printf("O sal�rio com o reajuste �:R$%.2f ", novoSalario);
    system("pause");

    return 0;
}
