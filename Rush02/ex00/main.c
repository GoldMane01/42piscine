/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-n <dramos-n@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 15:34:41 by dramos-n          #+#    #+#             */
/*   Updated: 2023/11/12 14:05:07 by dramos-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*get_file(char *path);
void	write_num(char *num, char *dict);

int	main(int argc, char *argv[])
{
	char	*dict;
	int		param;

	param = argc - 1;
	dict = get_file("./numbers.dict");
	write_num(argv[1], dict);
	free(dict);
	return (0);
}
