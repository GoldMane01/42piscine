/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-n <dramos-n@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:51:37 by dramos-n          #+#    #+#             */
/*   Updated: 2023/10/30 11:18:20 by dramos-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_comb(char digit[], int i, int j, int k)
{
	digit[0] = i + '0';
	digit[1] = j + '0';
	digit[2] = k + '0';
	write(1, &digit[0], 1);
	write(1, &digit[1], 1);
	write(1, &digit[2], 1);
	write(1, ", ", 1);
}

void	ft_print_comb(void)
{
	char	digit[3];	
	int		i;
	int		j;
	int		k;

	i = 0;
	j = i + 1;
	k = j + 1;
	while (i < 8)
	{
		j = i + 1;
		while (j < 9)
		{
			k = j + 1;
			while (k < 10)
			{
				write_comb(digit, i, j, k);
				k++;
			}
			j++;
		}
		++i;
	}
}
