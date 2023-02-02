/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoncalv <sgoncalv@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 09:09:55 by sgoncalv          #+#    #+#             */
/*   Updated: 2023/02/02 09:22:13 by sgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf_x(int n)
{
    ft_dec_to_hex(n);
    write(1, "\n", 1);
    return(ft_strlen(ft_itoa(n)));
}