/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoncalv <sgoncalv@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 23:11:28 by sgoncalv          #+#    #+#             */
/*   Updated: 2023/02/03 18:06:49 by sgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
int		ft_printf_c(char c);
int		ft_printf_di(int n);
int		ft_printf_p(unsigned long d);
int		ft_printf_s(char *s);
int		ft_printf_u(unsigned int n, int len);
int		ft_printf_x(unsigned int n, int len);
int		ft_x(unsigned int n, int len);
void	ft_putstr_fd(char *s, int fd);
int		ft_strlen(const char *str);
int		ft_decimal_to_hexadecimal(unsigned long d, int index, char x);
void	ft_putnbr_fd(int n, int fd);
char	*ft_itoa(int n);
char	*ft_strdup(const char *s1);

#endif
