/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_antidote.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymoustai <ironjedi4706@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 01:38:55 by ymoustai          #+#    #+#             */
/*   Updated: 2018/09/07 02:06:21 by ymoustai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_antidote(int i, int j, int k)
{
	if ((k <= i && k >= j) || (k <= j && k >= i))
	{
		return (k);
	}
	else if ((i <= j && i >= k) || (i >= j && i <= k))
	{
		return (i);
	}
		else return (k);
}
