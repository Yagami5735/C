#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int num;
    do
    {
        scanf("%d", &num);
        if(num <= 0)
        {
            printf("Numero Invalido!\n");
        }

    }while(num<=0);

    if(num%2 == 0)
    {
        printf("%d � par", num);
    }
    else
    {
        printf("%d � impar", num);
    }


    system("pause");


    return 0;
}
