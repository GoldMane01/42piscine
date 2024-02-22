#include <stdio.h>

void ft_putnbr(int nb)
{

    int a = nb/10;
    printf("%d", a);
}

int main(void)
{
    int n;

    n=777;
    ft_putnbr(n);
    return (0);
}