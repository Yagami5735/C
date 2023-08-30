#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int m7,m17;
    for(int i=0; i<=200; i++)
    {
        if(i%7 == 0 && i!= 0)
        {
            m7++;
        }
        if(i%17 == 0 && i!=0)
        {
            m17++;
        }
    }

    printf("Existem %d multiplos de 7 de 0 à 200", m7);



    system("pause");

    return 0;
}
