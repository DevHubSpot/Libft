/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakhmedo <aakhmedo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 14:57:30 by aakhmedo          #+#    #+#             */
/*   Updated: 2022/04/19 00:21:17 by aakhmedo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
			i--;
	}
	return (NULL);
}

int	main(void)
{
	char	c;
	char	*str;

	c = 'H';
	str = "Hello Igor";
	printf("%s\n", ft_strrchr(str, c));
}
