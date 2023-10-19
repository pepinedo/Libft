/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppinedo- <ppinedo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 15:31:50 by ppinedo-          #+#    #+#             */
/*   Updated: 2023/10/11 15:43:23 by ppinedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int a)
{
	if ((a >= 'A' && a <= 'Z') || (a >= 'a' && a <= 'z'))
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
	printf("%d\n", ft_isalpha(c));
	printf("%d\n", ft_isalpha(d));
}
*/