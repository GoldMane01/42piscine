/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-n <dramos-n@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 13:55:50 by dramos-n          #+#    #+#             */
/*   Updated: 2023/11/05 14:24:07 by dramos-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(char *arr);
char	*remove_spaces(char *arr_sp);

int	main(int argc, char *argv[])
{
	char	*nums;

	nums = remove_spaces(argv[argc - 1]);
	rush(nums);
	return (0);
}
