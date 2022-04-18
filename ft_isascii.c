#include <stdio.h>

int ft_isascii(int c)
{
    if (c >= 0 && c <= 177)
        return (1);
    else
        return (0);    
}

int main ()
{
    int i = 178;
    printf("%d\n", ft_isascii(i));
}