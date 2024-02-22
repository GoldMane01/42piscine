/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-n <dramos-n@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 18:10:28 by dramos-n          #+#    #+#             */
/*   Updated: 2023/11/15 16:32:24 by dramos-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_prime(int nb)
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

int	ft_find_next_prime(int nb)
{
	while (is_prime(nb) == 0)
		nb++;
	return (nb);
}
/*
#include <stdio.h>
int main(void)
{
	printf("%d", ft_find_next_prime(21));
	return 0;
}
*/
