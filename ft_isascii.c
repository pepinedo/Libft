/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppinedo- <ppinedo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 16:12:12 by ppinedo-          #+#    #+#             */
/*   Updated: 2023/10/11 17:53:07 by ppinedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int a)
{
	if (a >= 0 && a <= 127)
		return (1);
	return (0);
}

/*
int main(void)
{
	char	c;
	char	d;

	c = 'A';
	d = '\n';
	printf("%d\n", ft_isascii(c));
	printf("%d\n", ft_isascii(d));
}
*/