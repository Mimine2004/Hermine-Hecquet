/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhecquet <hhecquet@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:14:51 by hhecquet          #+#    #+#             */
/*   Updated: 2024/11/04 14:59:08 by hhecquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (dest < src)
	{
		while (n != 0)
		{
			*(unsigned char *)dest = *(unsigned char *)src;
			dest++;
			src++;
			n--;
		}
	}
	else
	{
		i = n - 1;
		while (i != 0)
		{
			*(unsigned char *)(dest + i) = *(unsigned char *)(src + i);
			i--;
		}
	}
	return (dest);
}
//si la dest est inf a la src : while n str1 = str2 n-- mais sinon 