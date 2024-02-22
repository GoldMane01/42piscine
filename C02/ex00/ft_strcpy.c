/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-n <dramos-n@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 15:11:38 by dramos-n          #+#    #+#             */
/*   Updated: 2023/11/08 12:58:17 by dramos-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int main(void)
{
	char arr[30] = "Hola";
	char arrcopy[30] = "Adios mundo";

	printf("%s", ft_strcpy(arrcopy, arr));
	
	printf("%s\n", arr);	
	printf("%s", arrcopy);

	return 0;
}

