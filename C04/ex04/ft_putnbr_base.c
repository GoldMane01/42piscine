/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-n <dramos-n@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 12:03:17 by dramos-n          #+#    #+#             */
/*   Updated: 2023/11/13 16:55:38 by dramos-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>

int	base_len(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (-1);
		while (base[j] != '\0')
		{
			if (base[i] == base[j] && i != j)
				return (-1);
			j++;
		}
		j = 0;
		i++;
	}
	if (i == 0 || i == 1)
		return (-1);
	return (i);
}

void	unsigned_base(unsigned int nb, char *base, int digits)
{
	while (nb != 0)
	{
		if (nb / digits != 0)
			unsigned_base((nb / digits), base, digits);
		write(1, &base[nb % digits], 1);
		nb = 0;
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int				digits;
	char			c;
	unsigned int	nb;

	c = '-';
	if (nbr == -2147483648)
		nb = 2147483648;
	if (nbr < 0)
	{
		write(1, &c, 1);
		nbr = nbr * -1;
	}
	digits = base_len(base);
	nb = nbr;
	if (digits != -1)
	{
		unsigned_base((nb / digits), base, digits);
		write(1, &base[nb % digits], 1);
	}
}
/*
int main(void)
{
	char base[] = "0123456789ABCDEF";
	int nbr = 1230;
	ft_putnbr_base(nbr, base);
	return 0;
}
*/
