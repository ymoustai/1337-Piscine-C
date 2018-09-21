/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymoustai <ironjedi4706@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 08:15:50 by ymoustai          #+#    #+#             */
/*   Updated: 2018/09/19 08:22:48 by ymoustai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_commas(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_check_print(int x[], int n)
{
	int i;
	int yes;

	i = 0;
	yes = 1;
	while (i < n - 1)
	{
		if (!(x[i] < x[i + 1]))
		{
			yes = 0;
		}
		i++;
	}
	if (yes == 1)
	{
		i = 0;
		while (i < n)
		{
			ft_putchar(x[i]);
			i++;
		}
		if (x[0] != 57 - n + 1)
			ft_commas();
	}
}

void	create_while(int x[], int k, int n)
{
	if (k == n - 1)
	{
		x[k] = 48;
		while (x[k] < 58)
		{
			ft_check_print(x, n);
			x[k]++;
		}
	}
	else
	{
		x[k] = 48;
		while (x[k] < 58)
		{
			create_while(x, k + 1, n);
			x[k]++;
		}
	}
}

void	ft_print_combn(int n)
{
	int x[n];

	create_while(x, 0, n);
}
