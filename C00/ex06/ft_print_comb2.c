/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-n <dramos-n@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 16:02:26 by dramos-n          #+#    #+#             */
/*   Updated: 2023/10/30 11:18:52 by dramos-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_comb(int nums[])
{
	int	space;

	space = 32;
	write(1, &nums[0], 1);
	write(1, &nums[1], 1);
	write(1, &space, 1);
	write(1, &nums[2], 1);
	write(1, &nums[3], 1);
	write(1, &space, 1);
	write(1, ",", 1);
	write(1, &space, 1);
}

void	ft_print_comb2(void)
{
	int	nums[4];

	while (nums[0] <= 57)
	{
		while (nums[1] <= 57)
		{
			while (nums[2] <= 57)
			{
				while (nums[3] <= 57)
				{
					write_comb(nums);
					nums[3] += 1;
				}
				nums[2] += 1;
				nums[3] = 48;
			}
			nums[1] += 1;
			nums[2] = 48;
		}
		nums[0] += 1;
		nums[1] = 48;
	}
}
