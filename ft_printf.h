/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoncalv <sgoncalv@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 23:11:28 by sgoncalv          #+#    #+#             */
/*   Updated: 2023/02/02 09:14:03 by sgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int ft_printf_c(char c);
void	ft_putstr_fd(char *s, int fd);
int	ft_strlen(const char *str);
void ft_dec_to_hex(size_t dec);
int ft_printf_p(char *str);
void	ft_putnbr_fd(int n, int fd);
char	*ft_itoa(int n);
char	*ft_strdup(const char *s1);
int ft_printf_di(int n);
int ft_printf_x(int n);

#endif

