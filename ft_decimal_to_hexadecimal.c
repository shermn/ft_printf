/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decimal_to_hexadecimal.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoncalv <sgoncalv@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 23:43:32 by sgoncalv          #+#    #+#             */
/*   Updated: 2023/02/03 18:27:44 by sgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_decimal_to_hexadecimal(unsigned long d, int index, char x)
{
	int	uper_lower_case;

	uper_lower_case = 87;
	if (x == 'X')
		uper_lower_case = 55;
	if (d > 15)
		index = ft_decimal_to_hexadecimal(d / 16, index, x);
	if ((d % 16) <= 9)
		ft_printf_c((d % 16) + 48);
	else
		ft_printf_c(d % 16 + uper_lower_case);
	index += 1;
	return (index);
}
