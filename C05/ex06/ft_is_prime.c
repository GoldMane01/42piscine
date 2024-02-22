/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-n <dramos-n@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 18:02:55 by dramos-n          #+#    #+#             */
/*   Updated: 2023/11/15 16:32:05 by dramos-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = nb / 2;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (0);
	if (nb == 1)
		return (0);
	while (i >= 2)
	{
		if (nb % i == 0)
			return (0);
		i--;
	}
	return (1);
}
/*
#include <stdio.h>
int main(void)
{
	printf("%d", ft_is_prime(-1));
	return 0;
}
*/
