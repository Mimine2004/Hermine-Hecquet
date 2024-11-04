/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhecquet <hhecquet@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 17:08:38 by hhecquet          #+#    #+#             */
/*   Updated: 2024/11/04 17:36:54 by hhecquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (ft_isalpha(c) == 1 && (c <= 'z' && c >= 'a'))
	{
		return (c - 31);
	}
	return (c);
}        
/*
#include <stdio.h>
int main(void)
{
	printf("%d",ft_toupper('a'));
        return(0);
}*/