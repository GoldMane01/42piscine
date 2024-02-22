/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-n <dramos-n@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 12:21:47 by dramos-n          #+#    #+#             */
/*   Updated: 2023/11/02 13:57:29 by dramos-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
char	*ft_strupcase(char *str)
{
	int	count;
	int	reset_ptr;

	reset_ptr = 0;
	count = 0;
	while (*str != '\0')
	{
		if (str[count] >= 97 && str[count] <= 122)
		{
			str[count] = (str[count] - 32);
		}
		str++;
		reset_ptr++;
	}
	while (reset_ptr > 0)
	{
		str--;
		reset_ptr--;
	}
	return (str);
}
/*
int main(void)
{
	char arr[30] = "asdsjdgfjkwqnzmn234,A  jkdsh";
	printf("%s", ft_strupcase(arr));
	return 0;
}
*/
