#include <stdio.h>

int ft_isprint(int c)
{
    if (c >= 32 && c <= 126)
        return (c);
    else
        return (0);    
}

int main ()
{
    char a = '!';
    char d;
    d = ft_isprint (a);
    printf("%d %c\n", (d), (a));
}