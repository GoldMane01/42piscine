/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-n <dramos-n@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 16:25:17 by dramos-n          #+#    #+#             */
/*   Updated: 2023/11/15 16:26:04 by dramos-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
		return (1);
	while (nb != 0)
	{
		if (nb > 0)
		{
			if (nb - 1 != 0)
				result = nb * ft_recursive_factorial(nb - 1);
		}
		return (result);
	}
	return (0);
}
/*
int main(void)
{
	printf("%d", ft_recursive_factorial(1));
	return 0;
}
*/
