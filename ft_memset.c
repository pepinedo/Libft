/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppinedo- <ppinedo-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:47:59 by ppinedo-          #+#    #+#             */
/*   Updated: 2023/09/21 16:26:19 by ppinedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*aux;

	i = 0;
	aux = (unsigned char *)b;
	while (i < len)
	{
		aux[i] = (unsigned char)c;
		i++;
	}
	return ((void *)aux);
}
