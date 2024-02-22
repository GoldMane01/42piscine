/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-n <dramos-n@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:21:47 by dramos-n          #+#    #+#             */
/*   Updated: 2023/11/02 13:36:26 by dramos-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_str_is_printable(char *str)
{
	int	flag;
	int	c;

	flag = 1;
	c = 0;
	while (*str != '\0')
	{
		if (str[c] < 32 || str[c] > 126)
			flag = 0;
		str++;
	}
	return (flag);
}
/*
int main(void)
{
	char arr[50] = "-dsa,fls faowhjo{}[]''``123K";
	printf("%d", ft_str_is_printable(arr));
	return 0;
}
*/
