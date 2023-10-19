/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppinedo- <ppinedo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:35:42 by ppinedo-          #+#    #+#             */
/*   Updated: 2023/10/11 15:45:31 by ppinedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int a)
{
	if (a >= '0' && a <= '9')
		return (1);
	return (0);
}

/*
int main(void)
{
	char	c;
	char	d;

	c = 'A';
	d = '5';
	printf("%d\n", ft_isdigit(c));
	printf("%d\n", ft_isdigit(d));
}
*/