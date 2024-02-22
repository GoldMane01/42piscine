/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-n <dramos-n@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 16:55:31 by dramos-n          #+#    #+#             */
/*   Updated: 2023/11/14 17:08:28 by dramos-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power != 0)
	{
		result = nb * ft_recursive_power(nb, power - 1);
		return (result);
	}
	return (result);
}
/*
#include <stdio.h>
int main(void)
{
	printf("%d", ft_recursive_power(-2, 3));
	return 0;
}
*/
