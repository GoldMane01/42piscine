/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-n <dramos-n@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 14:02:12 by dramos-n          #+#    #+#             */
/*   Updated: 2023/11/05 17:51:46 by dramos-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	combinations(char	*arr);

void	rush(char *arr)
{
	char	*left_col;
	int		counter;
	int		result;

	left_col = (char *)malloc(10);
	arr += 8;
	counter = 0;
	while (counter < 4)
	{
		*left_col = *arr;
		arr++;
		left_col++;
		counter++;
	}
	left_col -= 4;
	result = combinations(left_col);
}
