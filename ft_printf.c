/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoncalv <sgoncalv@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 20:38:08 by sgoncalv          #+#    #+#             */
/*   Updated: 2023/02/03 13:34:37 by sgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check_arg(va_list arg, char c)
{
	int	lenght;

	lenght = 1;
	if (c == 'c')
		lenght = ft_printf_c(va_arg(arg, int));
	if (c == 's')
		lenght = ft_printf_s(va_arg(arg, char *));
	if (c == 'p')
		lenght = ft_printf_p((va_arg(arg, unsigned long int)), 0);
	if (c == 'd' || c == 'i')
		lenght = ft_printf_di(va_arg(arg, int));
	if (c == 'u')
		lenght = ft_printf_u(va_arg(arg, unsigned int));
	if (c == 'x')
		lenght = ft_printf_x(va_arg(arg, int));
	if (c == 'X')
		lenght = ft_x(va_arg(arg, int));
	if (c == '%')
		ft_printf_c('%');
	return (lenght);
}

int	ft_printf(const char *str, ...)
{
	va_list		arg;
	int			i;
	int			lenght;
	char		c;

	i = 0;
	lenght = 0;
	va_start(arg, str);
	while (str[i])
	{
		c = str[i + 1];
		if (str[i] == '%')
		{
			lenght += ft_check_arg(arg, c);
			i++;
		}
		else
			lenght += write(1, &str[i], sizeof(char));
		i++;
	}
	va_end(arg);
	return (lenght);
}
