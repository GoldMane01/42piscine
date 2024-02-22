/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-n <dramos-n@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 10:20:02 by dramos-n          #+#    #+#             */
/*   Updated: 2023/11/15 10:23:53 by dramos-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	while (*argv[argc - argc] != '\0')
	{
		write(1, argv[argc - argc], 1);
		argv[argc - argc]++;
	}
	write(1, "\n", 1);
	return (0);
}
