#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int a, b, d, e, f;
    a = 5;
    b = 4;
    d = 9;
    e = 3;
    f = 7;

    if(((a+b) > f) && ((e+f) > (d+b)))
    {
        printf("Verdadeiro1");
    }
    else
    {
        printf("Falso1");

    }
    if(((a+b) > f) || ((e + f) > (d + b)))
    {
        printf("\nVerdadeiro2");
    }
    else
    {
        printf("\nFalso2");
    }
    if(((a+b) > f) && !((e + f) > (d + b)))
    {
        printf("\nVerdadeiro3");
    }
    else
    {
        printf("\nFalso3");
    }
    if(!((a+b) > f) || ((e + f) > (d + b)))
    {
        printf("\nVerdadeiro4");
    }
    else
    {
        printf("\nFalso4");
    }

    return 0;
}
