/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymoustai <ironjedi4706@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 01:40:36 by ymoustai          #+#    #+#             */
/*   Updated: 2018/09/13 03:00:38 by ymoustai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	unsigned int n;

	n = nb;
	if (nb <= 2147483647 && nb >= -2147483648)
	{
		if (nb < 0)
		{
			ft_putchar('-');
			n = -nb;
		}
		if (n > 9)
		{
			ft_putnbr(n / 10);
			ft_putnbr(n % 10);
		}
			else ft_putchar(n + '0');
	}
}
