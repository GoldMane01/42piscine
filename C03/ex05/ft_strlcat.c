/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-n <dramos-n@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:36:52 by dramos-n          #+#    #+#             */
/*   Updated: 2023/11/08 11:19:14 by dramos-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	counter;
	unsigned int	total_size;

	counter = 0;
	while (*dest != '\0')
	{
		dest++;
		counter++;
	}
	total_size = counter;
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		total_size++;
		dest++;
		counter++;
		if (total_size == size - 1)
			break ;
	}
	*dest = '\0';
	return (counter);
}
/*
int	main(void)
{
	char s1[50] = "ennove";
	char s2[] = "xdxdxdxdxd";

	printf("%u", ft_strlcat(s1, s2, 10));
	return 0;
}
*/
