#include <stdio.h>
#include <ctype.h>

int ft_isdigit(int c)

{
    if (c >= 48 && c <= 57) 
        return (1);
    else 
        return (0);
}

int main()
{
    char str = 'a';
    printf( "%d\n", ft_isdigit(str));
}