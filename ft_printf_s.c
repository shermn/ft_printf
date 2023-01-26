/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoncalv <sgoncalv@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 23:47:57 by sgoncalv          #+#    #+#             */
/*   Updated: 2023/01/11 12:54:36 by sgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf_s(char *s)
{
    int len;
    
    if (!s)
    {
        return(write(1,'NULL',1));
    }
    len = ft_strlen(s);
    ft_putstr_fd(s, 1);
    return(len);
}