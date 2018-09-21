/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymoustai <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 14:15:11 by ymoustai          #+#    #+#             */
/*   Updated: 2018/09/12 08:53:20 by ymoustai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

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

int		main(int argc, char **argv)
{
	ft_putstr(argv[argc - argc]);
	ft_putchar('\n');
	return (0);
}
