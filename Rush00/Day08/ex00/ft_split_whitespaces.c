/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymoustai <ironjedi4706@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 21:52:28 by ymoustai          #+#    #+#             */
/*   Updated: 2018/09/19 03:43:32 by ymoustai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_is_whitespace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}

int		ft_count(char *str)
{
	int		i;
	int		nb;
	int		flag;

	i = 0;
	nb = 0;
	flag = 0;
	while (str[i])
	{
		if (ft_is_whitespace(str[i]) && flag == 1)
			flag = 0;
		if (!ft_is_whitespace(str[i]) && flag == 0)
		{
			nb++;
			flag = 1;
		}
		i++;
	}
	return (nb);
}

int		ft_size(char *str, int p)
{
	int		i;

	i = p;
	while (str[i] && !ft_is_whitespace(str[i]))
		i++;
	return (i - p);
}

void	ft_pos(char *str, int *p)
{
	while (str[*p])
	{
		if (!ft_is_whitespace(str[*p]))
			return ;
		(*p)++;
	}
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		j;
	int		len;
	int		p[1];
	char	**tab_str;

	i = 0;
	*p = 0;
	tab_str = (char**)malloc(sizeof(char*) * (ft_count(str) + 1));
	if (tab_str)
	{
		while (i < ft_count(str))
		{
			j = 0;
			ft_pos(str, p);
			len = ft_size(str, *p);
			tab_str[i] = (char*)malloc(sizeof(char) * (len + 1));
			while (j < len)
				tab_str[i][j++] = str[(*p)++];
			tab_str[i][j] = '\0';
			i++;
		}
		tab_str[ft_count(str)] = 0;
	}
	return (tab_str);
}
