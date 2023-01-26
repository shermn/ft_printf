/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dec_to_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoncalv <sgoncalv@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 10:42:53 by sgoncalv          #+#    #+#             */
/*   Updated: 2023/01/24 10:42:53 by sgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_dec_to_hex(size_t dec)
{
    char    base[] = {'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'};
    
    if ((dec / 16) > 0)
    {
        ft_dec_to_hex((dec / 16));
    }
    write(1, &base[dec % 16], 1);    
}
/*
int main()
{
    ft_dec_to_hex(115);
    write(1, "\n", 1);
    return(0);
}*/