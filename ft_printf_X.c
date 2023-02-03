/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_X.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoncalv <sgoncalv@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 09:23:10 by sgoncalv          #+#    #+#             */
/*   Updated: 2023/02/03 13:24:18 by sgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
void ft_upper(size_t dec)
{
    char *base;
    
    base = "0123456789ABCDEF";
    if ((dec / 16) > 0)
    {
        ft_upper(dec / 16);
    }
    write(1, &base[dec % 16], 1);
}

int ft_printf_X(int n)
{
    ft_upper(n);
    return(ft_strlen(ft_itoa(n)));
}