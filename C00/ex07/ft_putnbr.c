#include <unistd.h>
#include <stdio.h>

void ft_putnbr(int nb)
{
    int remainder;
    int digits;
    int aux;
    int result;
    int i;

    digits=0;
    aux=nb;
    result=0;
    while (aux!=0)
    {
        digits++;
        aux=aux/(10);
    }
    i=0;
    while (i<digits)
    {
        result=nb;
        while (i<digits)
        {
            result=result/10;
            i++;
        }
        i=0;
        remainder=result+48;
        /*printf("I: %d, ", i);
        printf("Digits: %d, ", digits);
        printf("Result: %d, ", result);
        printf("Remainder: %d, ", remainder);*/
        write(1,&remainder,1);
        digits--;
    }
}

int main(void)
{
    int n;

    n=1234;
    ft_putnbr(n);
    return (0);
}
