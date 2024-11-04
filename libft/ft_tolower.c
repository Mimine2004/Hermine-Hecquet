/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhecquet <hhecquet@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:29:48 by hhecquet          #+#    #+#             */
/*   Updated: 2024/11/04 17:37:27 by hhecquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (ft_isalpha(c) == 1 && (c <= 'Z' && c >= 'A'))
	{
		return (c + 31);
	}
	return (c);
}
/*
#include <stdio.h>
int main(void)
{
	printf("%d",ft_tolower('A'));
        return(0);
}*/