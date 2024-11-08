/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhecquet <hhecquet@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:20:12 by hhecquet          #+#    #+#             */
/*   Updated: 2024/11/04 17:01:25 by hhecquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	res;

	i = 0;
	j = ft_strlen(dst);
	if (size == 0)
		return (ft_strlen(src));
	if (size > j)
		res = ft_strlen(src) + j;
	else
		res = ft_strlen(src) + size;
	while (src[i] && j < size - 1)
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (res);
}
/*
#include <bsd/string.h>
#include <stdio.h>
int main(void)
{
	char	dst[] = "";
	char	src[] = "12345678";
	char	dst2[] = "";
	char	src2[] = "12345678";
	printf("%d\n",ft_strlcat(dst,src,1));
	printf("%s\n",dst);
	printf("%zu\n",strlcat(dst2,src2,1));
	printf("%s\n",dst2);
	return(0);
}*/
//cc -Wall -Wextra -Werror -g -lbsd ft_strlcpy.c && ./a.out