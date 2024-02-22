/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-n <dramos-n@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 14:02:54 by dramos-n          #+#    #+#             */
/*   Updated: 2023/10/31 12:45:55 by dramos-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (*str != '\0')
	{
		counter++;
		str++;
	}
	return (counter);
}
/*
int	main(void)
{
	char string[] = "aaaPrueba";
	char *str;

	str = &string[0];
	int a = ft_strlen(string);
	printf("%d", a);

	return 0;
}
*/
