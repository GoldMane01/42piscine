/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-n <dramos-n@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:50:19 by dramos-n          #+#    #+#             */
/*   Updated: 2023/11/13 16:06:56 by dramos-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;

	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (nb == 0)
			write(1, "0", 1);
		if (nb < 0)
		{
			write(1, "-", 1);
			nb = nb * -1;
		}
		if (nb != 0)
		{
			c = (nb % 10) + '0';
			if (nb / 10 != 0)
				ft_putnbr(nb / 10);
			write(1, &c, 1);
		}
	}
}
/*
int main(void)
{
	ft_putnbr(-0);
	return 0;
}
*/
