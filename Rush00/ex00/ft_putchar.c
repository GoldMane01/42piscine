/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-n <dramos-n@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 16:51:55 by dramos-n          #+#    #+#             */
/*   Updated: 2023/10/28 16:51:58 by dramos-n         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*esta funcion solamente escribe en pantalla el caracter que recibe*/
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
