#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int cont = 0, soma = 0, num;

    while(soma<20)
    {
        scanf("%d", &num);
        soma+=num;
        cont+=1;
    }

    printf("Foram lidos %d números", cont);
    printf("A some é %d", soma);
    system("pause");


    return 0;
}
