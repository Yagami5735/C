#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    int idade, count=0, media=0;

    scanf("%d", &idade);
    while(idade>0)
    {
        count+=1;
        media = media+idade;
        scanf("%d", &idade);
    }
    media = media/count;
    printf("%d", media);


    return 0;
}
