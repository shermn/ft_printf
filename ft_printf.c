/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoncalv <sgoncalv@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 20:38:08 by sgoncalv          #+#    #+#             */
/*   Updated: 2023/01/09 23:42:28 by sgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int check_arg(va_list arg, char c)
{
    int len;

    len = 1;
    if (c == '')
    {
        /* code */
    }
    
}
int ft_printf(const char *str, ...)
{
    va_list arg;
    int i;
    int len;

    i = 0;
    len = 0;
    va_start(arg, str);
    while (str[i] != '\0')
    {
        if(str[i] == '%')
            {
                i++;
                len += 
            }
    }
}