/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-n <dramos-n@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 11:20:23 by dramos-n          #+#    #+#             */
/*   Updated: 2023/10/31 12:46:56 by dramos-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
void	ft_rev_int_tab(int *tab, int size)
{
	int	counter;
	int	aux;
	int	i;

	i = 1;
	counter = 0;
	while (counter < (size / 2))
	{
		aux = tab[counter];
		tab[counter] = tab[size - i];
		tab[size - i] = aux;
		counter++;
		i++;
	}
}
/*
int	main(void)
{
	int arr[] = {1,2,3,4,5,6,7,8,9};
	int *ptr = arr;
	ft_rev_int_tab(ptr, 9);
	//ft_rev_int_tab(arr, 9);

	int i=0;
	while (i<9)
	{
		printf("%d", arr[i]);
		i++;
	}
	return 0;
}
*/
