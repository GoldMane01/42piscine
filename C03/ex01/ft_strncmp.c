/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-n <dramos-n@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:50:15 by dramos-n          #+#    #+#             */
/*   Updated: 2023/11/13 11:57:33 by dramos-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	counter;

	counter = 0;
	if (n == 0)
		return (0);
	while (counter < (n - 1) && s1[counter] != '\0' && s2[counter] != '\0')
	{
		if (s1[counter] != s2[counter])
			return (s1[counter] - s2[counter]);
		counter++;
	}
	return (s1[counter] - s2[counter]);
}
/*
int	main(void)
{
	char s1[] = "";
	char s2[] = "ennove";

	printf("Mio: %d\n", ft_strncmp(s1, s2, 1));
	printf("Maquina: %d", strncmp(s1, s2, 1));
	return 0;
}
*/
