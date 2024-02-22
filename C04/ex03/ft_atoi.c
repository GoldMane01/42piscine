/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-n <dramos-n@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 11:44:35 by dramos-n          #+#    #+#             */
/*   Updated: 2023/11/14 18:21:14 by dramos-n         ###   ########.fr       */
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

int	ft_atoi(char *str)
{
	int	sign;
	int	res;

	res = 0;
	sign = 1;
	while (*str != '\0')
	{
		if ((*str > 8 && *str < 14) || *str == 32)
			str++;
		else
			break ;
	}
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = invert_sign(sign);
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		res = (res * 10) + (*str - '0');
		str++;
	}
	return (res * sign);
}
/*
int main(void)
{
	char str[] = " ----+-12354asfd12";
	printf("Mi atoi: %d\n", ft_atoi(str));
	return 0;
}
*/
