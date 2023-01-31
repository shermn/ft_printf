/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoncalv <sgoncalv@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 12:55:57 by sgoncalv          #+#    #+#             */
/*   Updated: 2023/01/27 13:27:52 by sgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf_p(char *str)
{
    size_t     len;
    size_t      n;
    
    len = ft_strlen(str);
    n = (size_t) &str;
    write(1,"0x",2);
    ft_dec_to_hex(n);
    return (len);
}