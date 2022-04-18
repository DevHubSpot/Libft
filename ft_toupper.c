#include <stdio.h>

int ft_toupper (int c)
{
if (c >= 97 && c <=122)
   return (c - 32);
return (c);
}
int main()
{
     char ch = 'a';
    printf("%c\n", ft_toupper(ch));
}