/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   combinations.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-n <dramos-n@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 15:47:57 by dramos-n          #+#    #+#             */
/*   Updated: 2023/11/05 18:16:50 by dramos-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rows.h"

void	fill_matrix(char *r1, char *r2, char *r3, char *r4)
{
	while (*r1 != '5')
	{
		*g_ptrm = *r1;
		r1++;
		g_ptrm++;
	}
	while (*r2 != '5')
	{
		*g_ptrm = *r2;
		r2++;
		g_ptrm++;
	}
	while (*r3 != '5')
	{
		*g_ptrm = *r3;
		r3++;
		g_ptrm++;
	}
	while (*r4 != '5')
	{
		*g_ptrm = *r4;
		r4++;
		g_ptrm++;
	}
}

char	*assign_pointer(char *col)
{
	if (*col == '1')
	{
		return (g_ptr1);
	}
	if (*col == '2')
	{
		return (g_ptr2);
	}
	if (*col == '3')
	{
		return (g_ptr3);
	}
	if (*col == '4')
	{
		return (g_ptr4);
	}
	return (col);
}

int	combinations(char *col)
{
	char	*ptr1;
	char	*ptr2;
	char	*ptr3;
	char	*ptr4;

	ptr1 = assign_pointer(col);
	col++;
	ptr2 = assign_pointer(col);
	col++;
	ptr3 = assign_pointer(col);
	col++;
	ptr4 = assign_pointer(col);
	fill_matrix(ptr1, ptr2, ptr3, ptr4);
	return (0);
}
