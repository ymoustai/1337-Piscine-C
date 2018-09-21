/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_next_prime.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymoustai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 23:34:31 by ymoustai          #+#    #+#             */
/*   Updated: 2018/09/10 23:42:07 by ymoustai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int		i;

	i = 3;
	if (nb <= 1)
		return (0);
	if (nb % 2 == 0 && nb > 2)
		return (0);
	while (i < (nb / 2))
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i += 2;
	}
	return (1);
}

int		ft_is_next_prime(int nb)
{
	int		next;

	next = nb + 1;
	if (nb <= 0)
	{
		return (0);
	}
	if (next % 2 == 0 && next != 2)
	{
		next += 1;
	}
	while (!ft_is_prime(next))
	{
		next += 2;
	}
	return (next);
	return (0);
}
