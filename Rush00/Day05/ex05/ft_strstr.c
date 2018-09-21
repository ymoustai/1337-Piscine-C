/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymoustai <ironjedi4706@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 03:08:05 by ymoustai          #+#    #+#             */
/*   Updated: 2018/09/13 06:06:38 by ymoustai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int l;

	i = 0;
	l = 1;
	while (to_find[l] != 0)
	{
		++l;
	}
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j])
			j++;
		if (j == l)
			return (str + i);
		i++;
	}
	return (0);
}
