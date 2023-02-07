/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoncalv <sgoncalv@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 12:55:57 by sgoncalv          #+#    #+#             */
/*   Updated: 2023/02/03 18:17:23 by sgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_conversor(unsigned long int n, int len)
{
	char	hexa[17];
	int		i;
	char	s;

	s = '0';
	i = -1;
	while (++i < 16)
	{
		if (i == 10)
			s = 'W';
		hexa[i] = i + s;
	}
	hexa[i] = '\0';
	if (n > 15)
		len = ft_conversor((n / 16), len);
	n = n % 16;
	len++;
	ft_printf_c(hexa[n]);
	return (len);
}

int	ft_printf_p(unsigned long int n, int len)
{
	ft_putstr_fd("0x", 1);
	len = ft_conversor(n, len);
	return (len + 2);
}
