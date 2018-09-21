/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymoustai <ironjedi4706@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 16:38:28 by ymoustai          #+#    #+#             */
/*   Updated: 2018/09/06 17:28:03 by ymoustai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_print(int hour)
{
	if (hour >= 24)
	{
		hour -= 24;
	}
	if (hour < 12)
	{
		if (hour == 0)
		{
			hour = 12;
		}
		printf("%d.00 A.M. ", hour);
	}
	else
	{
		if (hour > 12)
		{
			hour -= 12;
		}
		printf("%d.00 P.M. ", hour);
	}
}

void	ft_takes_place(int hour)
{
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	ft_print(hour);
	printf("AND ");
	ft_print(hour + 1);
	printf("\n");
}
