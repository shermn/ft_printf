/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoncalv <sgoncalv@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 14:42:45 by sgoncalv          #+#    #+#             */
/*   Updated: 2023/02/03 18:22:10 by sgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_u(unsigned int n, int len)
{
	char	dec[11];
	int		i;

	i = -1;
	while (++i < 10)
		dec[i] = i + '0';
	dec[i] = '\0';
	if (n > 9)
		len = ft_printf_u((n / 10), len);
	n = n % 10;
	len++;
	ft_printf_c(dec[n]);
	return (len);
}
