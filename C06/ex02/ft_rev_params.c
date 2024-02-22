/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-n <dramos-n@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 10:33:06 by dramos-n          #+#    #+#             */
/*   Updated: 2023/11/15 10:40:41 by dramos-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	param;

	param = argc - 1;
	while (param > 0)
	{
		while (*argv[param] != '\0')
		{
			write(1, argv[param], 1);
			argv[param]++;
		}
		write(1, "\n", 1);
		param--;
	}
	return (0);
}
