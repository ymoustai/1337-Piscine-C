/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymoustai <ironjedi4706@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 16:58:28 by ymoustai          #+#    #+#             */
/*   Updated: 2018/09/19 05:34:28 by ymoustai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		*tab;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	tab = (int*)malloc((max - min) * sizeof(int));
	if (tab == 0)
	{
		*range = NULL;
		return (0);
	}
	i = min;
	while (i < max)
	{
		tab[i - min] = i;
		i++;
	}
	*range = tab;
	return (max - min);
}
