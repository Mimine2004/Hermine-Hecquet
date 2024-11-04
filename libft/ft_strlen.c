/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhecquet <hhecquet@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 13:03:51 by hhecquet          #+#    #+#             */
/*   Updated: 2024/11/04 17:00:23 by hhecquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	j;

	j = 0;
	while (s[j])
	{
		j++;
	}
	return (j);
}
/*
#include <unistd.h>
void    ft_putchar(char c)
{
        write(1, &c, 1);
}
void    ft_putnbr(int nb)
{
        if (nb < 0)
        {
                ft_putchar('-');
                nb = -nb;
        }
        if (nb > 9)
        {
                ft_putnbr(nb / 10);
        }
        ft_putchar(nb % 10 + 48);
}
int main(void)
{
	ft_putnbr(ft_strlen("Bonjour 42 :-)")); //quatorze
	return(0);
}*/