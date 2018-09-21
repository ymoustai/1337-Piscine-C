/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymoustai <ironjedi4706@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 23:01:08 by ymoustai          #+#    #+#             */
/*   Updated: 2018/09/15 16:26:56 by ymoustai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i - 1] <= '/')
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
			i++;
		}
		else if ((str[i - 1] >= 'A' && str[i - 1] <= 'Z')
		|| (str[i - 1] >= '0' && str[i - 1] <= '9')
		|| (str[i - 1] >= 'a' && str[i - 1] <= 'z'))
		{
			if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
			i++;
		}
		else
			i++;
	}
	return (str);
}
