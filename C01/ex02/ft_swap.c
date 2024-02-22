/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-n <dramos-n@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 12:42:47 by dramos-n          #+#    #+#             */
/*   Updated: 2023/10/31 12:31:44 by dramos-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *b;
	*b = *a;
	*a = aux;
}

/*
int main(void)
{
	int n1 = 5;
	int n2 = 9;
	int *a, *b;

	a = &n1;
	b = &n2;
	printf("N1: %d, N2: %d", *a, *b);

	ft_swap(a, b);
	printf("N1: %d, N2: %d", *a, *b);

	return (0);
}
*/
