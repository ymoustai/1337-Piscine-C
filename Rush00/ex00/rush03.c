/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: twakrim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 20:36:16 by twakrim           #+#    #+#             */
/*   Updated: 2018/09/02 22:12:50 by twakrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int w;
	int h;

	w = x;
	h = y;
	y = 1;
	if (w > 0 && h > 0)
		while (y <= h)
		{
			x = 1;
			while (x <= w)
			{
				if ((x == 1 && y == 1) || (x == 1 && y == h))
					ft_putchar('A');
				else if (x < w && x > 1 && y < h && y > 1)
					ft_putchar(' ');
				else if ((x == w && y == 1) || (x == 1 && y == h))
					ft_putchar('C');
				else
					ft_putchar('B');
				x++;
			}
			ft_putchar('\n');
			y++;
		}
}
