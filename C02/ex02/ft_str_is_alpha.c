/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-n <dramos-n@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:21:47 by dramos-n          #+#    #+#             */
/*   Updated: 2023/11/06 14:00:52 by dramos-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_str_is_alpha(char *str)
{
	int	flag;
	int	c;

	flag = 1;
	c = 0;
	while (*str != '\0')
	{
		if (str[c] < 65)
			flag = 0;
		else
		{
			if (str[c] > 90 && str[c] < 97)
				flag = 0;
		}
		if (str[c] >= 97)
		{
			if (str[c] > 122)
				flag = 0;
		}
		str++;
	}
	return (flag);
}
/*
int main(void)
{
	char arr[30] = "qw234234 sfsdf";
	printf("%d", ft_str_is_alpha(arr));
	return 0;
}
*/
