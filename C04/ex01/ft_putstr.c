/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-n <dramos-n@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 13:34:07 by dramos-n          #+#    #+#             */
/*   Updated: 2023/11/07 14:47:43 by dramos-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}
/*
int main(void)
{
	char string[] = "Texto de Ejemplo";
	char *str;

	str = &string[0];
	//printf("%d", string[0]);
	//write(1, str, 1);
	ft_putstr(string);

	return 0;
}
*/
