/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymoustai <ironjedi4706@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/19 11:40:57 by ymoustai          #+#    #+#             */
/*   Updated: 2018/09/19 11:41:02 by ymoustai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STOCK_PAR_H
# define FT_STOCK_PAR_H

typedef struct	s_stock_par
{
	int		size_param;
	char	*str;
	char	*copy;
	char	**tab;
}				t_stock_par;

void			ft_show_tab(t_stock_par *par);

t_stock_par		*ft_param_to_tab(int ac, char **av);

void			ft_putchar(char c);

void			ft_putnbr(int nb);

void			ft_print_words_tables(char **tab);

#endif
