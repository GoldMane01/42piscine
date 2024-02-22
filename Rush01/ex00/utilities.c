/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilities.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-n <dramos-n@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 14:53:19 by dramos-n          #+#    #+#             */
/*   Updated: 2023/11/05 14:20:23 by dramos-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

char	*remove_spaces(char *arr)
{
	char	*nums;
	char	*ptr;

	nums = (char *)malloc(20);
	ptr = nums;
	while (*arr != '\0')
	{
		if (*arr == '1')
			*nums = '1';
		if (*arr == '2')
			*nums = '2';
		if (*arr == '3')
			*nums = '3';
		if (*arr == '4')
			*nums = '4';
		arr++;
		if (*arr != ' ')
			nums++;
	}
	return (ptr);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
