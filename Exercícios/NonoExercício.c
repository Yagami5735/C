#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    float dinheiro, g1, g2, g3;
    printf("Digite o valor do pr�mio: ");
    scanf("%f", &dinheiro);
    g1 = dinheiro * 0.46;
    g2 = dinheiro * 0.32;
    g3 = dinheiro - (g1 + g2);
    printf("O primeiro ganhador ganhar� R$%0.2f , o segundo ganhar� R$%0.2f e o terceiro ir� ganhar R$%0.2f", g1, g2, g3);
    system("pause");

    return 0;
}
