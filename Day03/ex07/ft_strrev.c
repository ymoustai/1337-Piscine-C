/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymoustai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 07:16:07 by ymoustai          #+#    #+#             */
/*   Updated: 2018/09/09 07:21:41 by ymoustai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	int		i;
	int		j;
	char	tmp;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (i - 1 > j)
	{
		tmp = str[i - 1];
		str[i - 1] = str[j];
		str[j] = tmp;
		i--;
		j++;
	}
	return (str);
}
