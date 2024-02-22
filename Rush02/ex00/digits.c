/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   digits.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-n <dramos-n@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 14:35:51 by dramos-n          #+#    #+#             */
/*   Updated: 2023/11/12 15:59:51 by dramos-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	one_digit(char *num, char *dict)
{
	int	i;

	i = 0;
	while (dict[i] != '\0')
	{
		while (dict[i] != '\n')
		{
			if (dict[i] == *num && (dict[i + 1] == ' ' || dict[i + 1] == ':'))
			{
				if (dict[i - 1] < '0' || dict[i - 1] > '9')
				{
					i++;
					while (dict[i] == ' ' || dict[i] == ':')
						i++;
					while (dict[i] != '\n')
					{
						write(1, &dict[i], 1);
						i++;
					}
				}
			}
			i++;
		}
		i++;
	}
}

void	two_digit(char *num, char *dict)
{
	int	i;

	i = 0;
	while (dict[i] != '\0' && dict[i] != '\n')
	{
		if (num[0] == '1')
		{
			while (dict[i] == '1' && (dict[i + 1] >= '0' && dict[i + 1] <= '9'))
			{
				if (dict[i + 2] != ' ' && dict[i + 2] != ':')
				{
					i += 2;
					while (dict[i] == ' ' || dict[i] == ':')
						i++;
					while (dict[i] != '\n')
					{
						write(1, &dict[i], 1);
						i++;
					}
				}
				i++;
			}
		}
		i++;
	}
}
