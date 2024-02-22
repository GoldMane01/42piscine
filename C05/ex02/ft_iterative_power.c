/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-n <dramos-n@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 16:48:49 by dramos-n          #+#    #+#             */
/*   Updated: 2023/11/14 17:09:55 by dramos-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (power > 0)
	{
		result = nb * result;
		power--;
	}
	return (result);
}
/*
#include <stdio.h>
int main(void)
{
	printf("%d", ft_iterative_power(-3, 3));
	return 0;
}
*/
