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

int	ft_printf_p(unsigned long d)
{
	int		lenght;

	write(1, "0x", 2);
	lenght = ft_decimal_to_hexadecimal(d, 0, 'p');
	lenght += 2;
	return (lenght);
}
