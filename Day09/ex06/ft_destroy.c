/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymoustai <ymoustai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 02:44:44 by ymoustai          #+#    #+#             */
/*   Updated: 2018/09/07 14:40:45 by ymoustai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ultimator.h"

void	ft_destroy(char ***factory)
{
	int i;
	int y;

	i = 0;
	while (factory[i] != 0)
	{
		y = 0;
		while (factory[i][y] != 0)
		{
			free(factory[i][y]);
			y++;
		}
		free(factory[i]);
		i++;
	}
	free(factory);
}
