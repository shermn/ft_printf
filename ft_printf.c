/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoncalv <sgoncalv@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 20:38:08 by sgoncalv          #+#    #+#             */
/*   Updated: 2023/02/02 18:28:13 by sgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_esp(const char c, va_list *print)
{
	int		len;

	len = 1;
	if (c == 'c')
		ft_printf_c((va_arg((*print), int)));
	else if (c == 's')
		len = ft_printf_s((va_arg((*print), char *)));
	else if (c == '%')
		ft_putchar_fd(c, 1);
	else if (c == 'p')
		len = ft_printf_p((va_arg((*print), unsigned long int)), 0);
	else if (c == 'd' || c == 'i')
		len = ft_printf_di((va_arg((*print), int)));
	else if (c == 'u')
		len = ft_printf_u((va_arg((*print), unsigned int)), 0);
	else if (c == 'x')
		len = ft_printf_x((va_arg((*print), int)), 0);
	else if (c == 'X')
		len = ft_printf_xx((va_arg((*print), int)), 0);
	return (len);
}

int	ft_printf(const char *format, ...)
{
	int		len;
	char	*str;
	va_list	print;

	len = 0;
	str = (char *) format;
	va_start(print, format);
	while (str[0] != '\0')
	{
		if (str[0] == '%')
		{
			str++;
			len = print_esp(str[0], &print) + len;
		}
		else
		{
			ft_putchar_fd(str[0], 1);
			len++;
		}
		str++;
	}
	va_end(print);
	return (len);
}