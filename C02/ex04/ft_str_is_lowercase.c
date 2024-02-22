/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-n <dramos-n@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:21:47 by dramos-n          #+#    #+#             */
/*   Updated: 2023/11/02 13:32:45 by dramos-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_str_is_lowercase(char *str)
{
	int	flag;
	int	c;

	flag = 1;
	c = 0;
	while (*str != '\0')
	{
		if (str[c] < 97 || str[c] > 122)
			flag = 0;
		str++;
	}
	return (flag);
}
/*
int main(void)
{
	char arr[30] = "afsadjfdskj";
	printf("%d", ft_str_is_lowercase(arr));
	return 0;
}
*/
