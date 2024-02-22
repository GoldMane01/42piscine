/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-n <dramos-n@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:36:52 by dramos-n          #+#    #+#             */
/*   Updated: 2023/11/07 17:11:19 by dramos-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	counter;
	int				i;

	i = 0;
	counter = 0;
	while (dest[i] != '\0')
		i++;
	while (counter < nb && src[counter] != '\0')
	{
		dest[i] = src[counter];
		i++;
		counter++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char s1[50] = "";
	char s2[] = "";

	printf("%s", ft_strncat(s1, s2, 10));
	return 0;
}
*/
