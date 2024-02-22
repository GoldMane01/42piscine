/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-n <dramos-n@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:34:56 by dramos-n          #+#    #+#             */
/*   Updated: 2023/11/15 16:26:48 by dramos-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0)
		return (1);
	else
	{
		while (nb != 0)
		{
			result = nb * result;
			if (nb > 0)
				nb--;
		}
		return (result);
	}
	return (0);
}
/*
int main(void)
{
	printf("%d", ft_iterative_factorial(-10));
	return 0;
}
*/
