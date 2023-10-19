/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppinedo- <ppinedo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 13:42:58 by ppinedo-          #+#    #+#             */
/*   Updated: 2023/10/11 15:56:05 by ppinedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int a)
{
	if (a >= 'a' && a <= 'z')
		a = a - 32;
	return (a);
}

/*
int main(void)
{
	char	c;
	char	d;

	c = 'm';
	d = '!';
	printf("%c\n", ft_toupper(c));
	printf("%c\n", ft_toupper(d));
}
*/