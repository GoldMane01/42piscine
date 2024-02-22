/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-n <dramos-n@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 13:07:01 by dramos-n          #+#    #+#             */
/*   Updated: 2023/10/31 12:34:02 by dramos-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	n1;
	int	n2;

	n1 = *a;
	n2 = *b;
	*a = (n1 / n2);
	*b = (n1 % n2);
}
/*
int main(void)
{
	int n1 = 10;
	int n2 = 2;
	int *d;
	int *m;

	d = &n1;
	m = &n2;
	printf("N1: %d, N2: %d\n", *d, *m);

	ft_ultimate_div_mod(d, m);
	printf("N1: %d, N2: %d\n", *d, *m);

	return 0;
}
*/
