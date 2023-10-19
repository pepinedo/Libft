/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppinedo- <ppinedo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:22:07 by ppinedo-          #+#    #+#             */
/*   Updated: 2023/10/11 16:30:30 by ppinedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	a;
	char	*as;

	a = (char)c;
	i = 0;
	as = (char *)s;
	while (as[i])
	{
		if (as[i] == a)
			return (&as[i]);
		i++;
	}
	if (a == '\0')
		return (&as[i]);
	return (0);
}

/*
int main (void)
{
	char	*s;

	s = "Holacaracola";
	printf("%s\n", ft_strchr(s, 'l'));
}
*/