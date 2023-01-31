/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoncalv <sgoncalv@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 14:42:45 by sgoncalv          #+#    #+#             */
/*   Updated: 2023/01/27 14:45:30 by sgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf_u(unsigned int n)
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

int main()
{
    int s;
    s = -6748;
    ft_printf_u(s);
    return(0);
}
