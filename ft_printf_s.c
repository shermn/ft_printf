/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoncalv <sgoncalv@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 23:47:57 by sgoncalv          #+#    #+#             */
/*   Updated: 2023/02/03 18:19:48 by sgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_s(char *temp)
{
	int	len;

	if (!temp)
		return (write(1, "(null)", 6));
	len = 0;
	len = ft_strlen(temp);
	ft_putstr_fd(temp, 1);
	return (len);
}
