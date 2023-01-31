/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoncalv <sgoncalv@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 11:04:52 by sgoncalv          #+#    #+#             */
/*   Updated: 2023/01/27 12:56:06 by sgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*p;
	int		i;

	if (!n)
	{
		return ;
	}
	i = 0;
	p = ft_itoa(n);
	while (p[i] != '\0')
	{
		write(fd, &p[i], 1);
		i++;
	}
}