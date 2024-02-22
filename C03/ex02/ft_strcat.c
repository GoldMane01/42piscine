/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-n <dramos-n@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:17:28 by dramos-n          #+#    #+#             */
/*   Updated: 2023/11/07 17:11:41 by dramos-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	counter;

	counter = 0;
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[counter] != '\0')
	{
		dest[i] = src[counter];
		counter++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char s1[100] = "";
	char s2[] = "";
	//char *ptr;

	//ptr = s1;
	//ft_strcat(s1, s2);
	printf("\n... %s", ft_strcat(s1, s2));
	//strcat(s1, s2);
	//printf("%s", ptr);
	return 0;
}
*/
