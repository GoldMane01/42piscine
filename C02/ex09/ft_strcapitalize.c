/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-n <dramos-n@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:03:37 by dramos-n          #+#    #+#             */
/*   Updated: 2023/11/06 18:31:36 by dramos-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
char	*ft_strcapitalize(char *str)
{
	int		flag;

	flag = 0;
	if (*str >= 97 && *str <= 122)
		*str = (*str - 32);
	while (*str != '\0')
	{
		if (*str < 48 || *str > 122)
			flag = 1;
		if (*str > 57 && *str < 65)
			flag = 1;
		if (*str > 90 && *str < 97)
			flag = 1;
		if (flag == 1)
		{
			if (str[1] >= 97 && str[1] <= 122)
			{
				str[1] = (str[1] - 32);
			}
			flag = 0;
		}
		str++;
	}
	return (str);
}
/*
int	main(void)
{
	char arr[100] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char *ptr = arr;
	ft_strcapitalize(arr);
	printf("\n\n... %s", ptr);
	return 0;
}
*/
