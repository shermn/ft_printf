/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoncalv <sgoncalv@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 12:55:57 by sgoncalv          #+#    #+#             */
/*   Updated: 2023/01/26 12:47:54 by sgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf_p(char *str)
{
    size_t     len;
    size_t      n;
    
    len = ft_strlen(str);
    n = (size_t) &str;
    printf("%ld\n", n);
    printf("%p printf \n", str);
    write(1,"0x",2);
    ft_dec_to_hex(n);
    write(1, "\n", 1);
    printf("%p printf2 \n", str);
    return (len);
}

int main()
{
    char s[]= "sherman";
    ft_printf_p(s);
    printf("\n");
    return(0);
}