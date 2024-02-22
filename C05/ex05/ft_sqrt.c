/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-n <dramos-n@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 17:32:04 by dramos-n          #+#    #+#             */
/*   Updated: 2023/11/16 18:13:32 by dramos-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

float	absolute(float x)
{
	if (x < 0)
		x = -x;
	return (x);
}

int	ft_sqrt(int nb)
{
	float	guess;

	guess = 1;
	while (absolute(guess * guess - nb) >= 0.0001)
		guess = ((nb / guess) + guess) / 2;
	if ((int) guess < guess)
		return (0);
	return ((int) guess);
}
/*
#include <stdio.h>
int main(void)
{
	printf("%d", ft_sqrt(37));
	return 0;
}
*/
