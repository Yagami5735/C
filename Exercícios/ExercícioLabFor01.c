#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    for(int i = 10; i<=60; i++)
    {
        printf("\n%d", i);
    }

    system("pause");

    return 0;
}
