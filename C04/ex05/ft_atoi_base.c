/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-n <dramos-n@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:40:44 by dramos-n          #+#    #+#             */
/*   Updated: 2023/11/09 15:07:44 by dramos-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	invert_sign(int sign)
{
	if (sign == 1)
		return (-1);
	if (sign == -1)
		return (1);
	return (1);
}

int	base_len(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (-1);
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (-1);
			j++;
		}
		i++;
	}
	if (i == 0 || i == 1)
		return (-1);
	return (i);
}

int	ft_putnbr_base(int nbr, char *base)
{
	int	digits;
	int	multiplier;
	int	result;

	result = 0;
	multiplier = 1;
	digits = base_len(base);
	if (digits != -1)
	{
		while (nbr != 0)
		{
			result += (nbr % digits) * multiplier;
			nbr = nbr / digits;
			multiplier = multiplier * 10;
		}
	}
	return (result);
}

int	check_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (c == base[i])
			return (1);
		i++;
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	sign;
	int	res;
	int	digits;

	digits = base_len(base);
	res = 0;
	sign = 1;
	while (*str != '\0')
	{
		if ((*str > 8 && *str < 14) || *str == 32 || *str == '+')
			str++;
		if (*str == '-')
			sign = invert_sign(sign);
		if (check_base(*str, base))
			break ;
		str++;
	}
	while (check_base(*str, base) == 1)
	{
		res = (res * 10) + (*str - '0');
		str++;
	}
	return (ft_putnbr_base(res, base) * sign);
}
/*
int main(void)
{
	char str[] = " --	 ---+--+1234asfd12";
	char base[] = "0123456";
	int n = 40;
	printf("\n... %d", ft_atoi_base(str, base));
	return 0;
}
*/
