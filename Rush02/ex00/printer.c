/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-n <dramos-n@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 17:42:49 by dramos-n          #+#    #+#             */
/*   Updated: 2023/11/12 14:35:58 by dramos-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	one_digit(char *num, char *dict);
void	two_digit(char *num, char *dict);

int	num_len(char *num)
{
	int	i;

	i = 0;
	while (num[i] != '\0')
		i++;
	return (i);
}

void	write_num(char *num, char *dict)
{
	int	len;

	len = num_len(num);
	if (len == 1)
		one_digit(num, dict);
	if (len == 2)
		two_digit(num, dict);
}
