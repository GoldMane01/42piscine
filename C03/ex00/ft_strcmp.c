/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-n <dramos-n@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:50:15 by dramos-n          #+#    #+#             */
/*   Updated: 2023/11/06 13:05:19 by dramos-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <string.h>
*/
int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0')
	{
		if (*s1 < *s2)
			return (*s1 - *s2);
		if (*s1 > *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
/*
int	main(void)
{
	char s1[] = "ennove";
	char s2[] = "ennov";

	printf("%d", ft_strcmp(s1, s2));
	return 0;
}
*/
