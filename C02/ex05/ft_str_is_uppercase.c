/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-n <dramos-n@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:21:47 by dramos-n          #+#    #+#             */
/*   Updated: 2023/11/02 13:33:02 by dramos-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_str_is_uppercase(char *str)
{
	int	flag;
	int	c;

	flag = 1;
	c = 0;
	while (*str != '\0')
	{
		if (str[c] < 65 || str[c] > 90)
			flag = 0;
		str++;
	}
	return (flag);
}
/*
int main(void)
{
	char arr[30] = "SAUHFKJDSABFHJ";
	printf("%d", ft_str_is_uppercase(arr));
	return 0;
}
*/
