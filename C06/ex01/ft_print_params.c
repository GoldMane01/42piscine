/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-n <dramos-n@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 10:33:06 by dramos-n          #+#    #+#             */
/*   Updated: 2023/11/15 10:38:05 by dramos-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	param;

	param = argc - (argc - 1);
	while (param < argc)
	{
		while (*argv[param] != '\0')
		{
			write(1, argv[param], 1);
			argv[param]++;
		}
		write(1, "\n", 1);
		param++;
	}
	return (0);
}
