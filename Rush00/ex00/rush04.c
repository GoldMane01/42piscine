/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dramos-n <dramos-n@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 16:56:59 by dramos-n          #+#    #+#             */
/*   Updated: 2023/10/29 14:19:04 by rmarin-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char character);

void	ft_putbase(int width, int start)
{
	if (start == 0)
	{
		ft_putchar('A');
	}
	else if (start == 1)
	{
		ft_putchar('C');
	}
	while (width > 2)
	{
		ft_putchar('B');
		width--;
	}
	if (start == 0)
	{
		ft_putchar('C');
	}
	else if (start == 1)
	{
		ft_putchar('A');
	}
}

void	ft_putside(int width)
{
	ft_putchar('B');
	while (width > 2)
	{
		ft_putchar(' ');
		width--;
	}
	ft_putchar('B');
}

/*Esta funcion trata las excepciones (en este caso, trata los rectangulos de
 * ancho 1, de alto 1, y de ancho y alto 1*/
void	ft_exceptions(int exception, int width, int heigth)
{
	if (exception == 0)
	{
		ft_putchar('A');
		ft_putchar('\n');
		while (--heigth >= 2)
		{
			ft_putchar('B');
			ft_putchar('\n');
		}
		ft_putchar('C');
	}
	else if (exception == 1)
	{
		ft_putchar('A');
		while (--width >= 2)
		{
			ft_putchar('B');
		}
		ft_putchar('C');
	}
	else if (exception == 2)
	{
		ft_putchar('A');
	}
}

/*El parametro x es el ancho del rectangulo, y el parametro y es el alto*/
void	rush(int x, int y)
{
	if (x == 1 && y == 1)
	{
		ft_exceptions(2, x, y);
	}
	else if (y == 1 && x > 1)
	{
		ft_exceptions(1, x, y);
	}
	else if (x == 1 && y > 1)
	{
		ft_exceptions(0, x, y);
	}
	else if (x > 1 && y > 1)
	{
		ft_putbase(x, 0);
		ft_putchar('\n');
		while (y > 2)
		{
			ft_putside(x);
			ft_putchar('\n');
			y--;
		}
		ft_putbase(x, 1);
	}
}
