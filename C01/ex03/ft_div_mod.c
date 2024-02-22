/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-n <dramos-n@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 12:51:44 by dramos-n          #+#    #+#             */
/*   Updated: 2023/10/31 12:33:02 by dramos-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = (a / b);
	*mod = (a % b);
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

	ft_div_mod(n1, n2, d, m);
	printf("N1: %d, N2: %d\n", *d, *m);

	return 0;
}
*/
