/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dec_to_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoncalv <sgoncalv@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 10:42:53 by sgoncalv          #+#    #+#             */
/*   Updated: 2023/02/01 16:39:12 by sgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_dec_to_hex(size_t dec)
{
    char *base;
    
    base = "0123456789ABCDEF";
    if ((dec / 16) > 0)
    {
        ft_dec_to_hex((dec / 16));
    }
    write(1, &base[dec % 16], 1);
}