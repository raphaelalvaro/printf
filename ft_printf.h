/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ralvaro <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 16:18:25 by ralvaro           #+#    #+#             */
/*   Updated: 2022/03/23 10:44:13 by ralvaro          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h>

int		ft_printf(const char *string, ...);
void	ft_putchar_len(char c, int *l);
void	ft_putnbr_d(int n, int *l);
void	ft_putstr_str(char *args, int *l);
void	ft_hex(unsigned int x, int *l, char c);
void	ft_uns(unsigned int c, int *l);
void	ft_p(size_t p, int *l);

#endif
