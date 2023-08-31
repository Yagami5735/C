#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    float valor, anos, qtdC, qtdCAno=0, valorTotal=0;
    printf("Digite à quanto tempo(em anos) que você fuma: ");
    scanf("%f", &anos);
    printf("\nDigite quantos cigarros você fuma por dia: ");
    scanf("%f", &qtdC);
    printf("\nDigite o valor do cigarro: ");
    scanf("%f", &valor);

    qtdCAno = qtdC * 365 * anos;
    valorTotal = (valor * qtdCAno)/20;

    printf("Você já gastou R$%0.2f em cigarro", valorTotal);


    return 0;
}
