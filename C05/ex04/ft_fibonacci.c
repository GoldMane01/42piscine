/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-n <dramos-n@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 17:10:28 by dramos-n          #+#    #+#             */
/*   Updated: 2023/11/14 17:31:26 by dramos-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	b = 0;
	c = 0;
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	if (index < 0)
		return (-1);
	if (index > 0)
	{
		c = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	}
	return (c);
}
/*
#include <stdio.h>
int main(void)
{
	printf("%d", ft_fibonacci(7));
	return 0;
}
*/
