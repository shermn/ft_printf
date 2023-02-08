/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_X.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoncalv <sgoncalv@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 09:23:10 by sgoncalv          #+#    #+#             */
/*   Updated: 2023/02/03 18:26:13 by sgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_x(unsigned int n, int len)
{
	char	hexa[17];
	int		i;
	char	s;

	s = '0';
	i = -1;
	while (++i < 16)
	{
		if (i == 10)
			s = '7';
		hexa[i] = i + s;
	}
	hexa[i] = '\0';
	if (n > 15)
		len = ft_x((n / 16), len);
	n = n % 16;
	len++;
	ft_printf_c(hexa[n]);
	return (len);
}
