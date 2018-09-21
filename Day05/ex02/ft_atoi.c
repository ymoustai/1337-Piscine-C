/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymoustai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/09 07:12:20 by ymoustai          #+#    #+#             */
/*   Updated: 2018/09/09 07:24:08 by ymoustai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int j;
	int result;
	int negative;

	negative = 0;
	while (*str >= 0 && *str <= 32)
		str++;
	if (*str == '-')
	{
		negative = 1;
		str++;
	}
	else if (*str == '+')
		str++;
	result = 0;
	j = *str - '0';
	while (j >= 0 && j <= 9 && *str != '\0')
	{
		result = result * 10 + j;
		str++;
		j = *str - '0';
	}
	if (negative)
		result = result * -1;
	return (result);
}
