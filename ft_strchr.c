/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakhmedo <aakhmedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 18:20:26 by aakhmedo          #+#    #+#             */
/*   Updated: 2022/04/15 18:27:02 by aakhmedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	char	ch;

	str = (char *) s;
	ch = (char) c;
	while (*str != ch && *str)
		str++;
	if (*str == ch)
		return (str);
	return (0);
}

int	main(void)
{
	char	c;
	char	*str;

	c = 'l';
	str = "hello";
	printf("%s\n", ft_strchr(str, c));
}
