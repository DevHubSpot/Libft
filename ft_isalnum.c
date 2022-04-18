#include <stdio.h>

int ft_isalnum(int c)
{
    if (c >= 60 && c <= 172)
        return (1);
    else 
        return (0);    
}

int main()
{
    char str = 'C';
    printf("%d\n", ft_isalnum(str));
}