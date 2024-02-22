/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-n <dramos-n@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:55:40 by dramos-n          #+#    #+#             */
/*   Updated: 2023/11/08 15:19:56 by dramos-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*ptr;
	int		count;

	ptr = to_find;
	while (*str != '\0')
	{
		while (*str == *to_find && *to_find != '\0')
		{
			str++;
			to_find++;
			count++;
		}
		if (*to_find == '\0')
		{
			str -= count;
			return (str);
		}
		else
		{
			to_find = ptr;
			count = 0;
		}
		str++;
	}
	return (0);
}
/*
int	main(void)
{
	char	s1[] = "Buscar en este PERA texto";
	char	s2[] = "PERAa";

	printf("\n\n... %s", ft_strstr(s1, s2));
	return 0;
}
*/
