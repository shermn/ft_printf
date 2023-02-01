/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoncalv <sgoncalv@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 14:42:45 by sgoncalv          #+#    #+#             */
/*   Updated: 2023/02/01 16:09:51 by sgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf_u(unsigned int n)
{
	char	dec[11];
	int		i;
    int     len;

	i = -1;
    len = 0;
	while (++i < 10)
		dec[i] = i + '0';
	dec[i] = '\0';
	if (n > 9)
		len += ft_printf_u(n / 10);
	n = n % 10;
	ft_printf_c((dec[n]));
	return (len);
}