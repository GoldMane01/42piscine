/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-n <dramos-n@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 10:41:43 by dramos-n          #+#    #+#             */
/*   Updated: 2023/11/15 15:42:52 by dramos-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>

void	show(char *arg[], int num)
{
	int	i;

	i = 1;
	while (i < num)
	{
		while (*arg[i] != '\0')
		{
			write(1, arg[i], 1);
			arg[i]++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	swap(char *arg[], int pos)
{
	char	swap[200];
	int		i;

	i = 0;
	while (arg[pos][i] != '\0')
	{
		swap[i] = arg[pos][i];
		i++;
	}
	swap[i] = '\0';
	arg[pos] = arg[pos + 1];
	arg[pos + 1] = swap;
}

int	main(int argc, char *argv[])
{
	int	repeat;
	int	i;
	int	j;

	j = 0;
	i = 1;
	repeat = argc;
	while (i < argc - 1)
	{
		if (argv[i][j] > argv[i + 1][j])
			swap(argv, i);
		i++;
		j = 0;
	}
	show(argv, argc);
	return (0);
}
