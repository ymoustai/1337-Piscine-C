/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymoustai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 13:02:43 by ymoustai          #+#    #+#             */
/*   Updated: 2018/09/11 13:05:52 by ymoustai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int		i;
	char	string;

	i = 0;
	while (*(str + i) != '\0')
	{
		string = *(str + i);
		ft_putchar(string);
		i++;
	}
}
