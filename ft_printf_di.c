/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_di.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoncalv <sgoncalv@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 11:02:42 by sgoncalv          #+#    #+#             */
/*   Updated: 2023/01/27 14:30:32 by sgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf_di(int n)
{
    int len;
	char	*str;

	str = ft_itoa(n);
	len = ft_strlen(str);
	free(str);
    ft_putnbr_fd(n, 1);
    write(1,"\n", 1);
    return(len);
}