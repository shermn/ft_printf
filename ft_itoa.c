/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoncalv <sgoncalv@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 13:36:46 by sgoncalv          #+#    #+#             */
/*   Updated: 2023/01/27 13:37:09 by sgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	count(int n)
{
	int	temp;
	int	j;

	j = 0;
	temp = n;
	if (temp < 0)
	{
		j++;
		temp = temp * (-1);
	}
	while (temp > 0)
	{
		temp = temp / 10;
		j++;
	}
	return (j);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*ptr;

	if (n == 0)
		return (ft_strdup("0"));
	else if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = count(n);
	ptr = malloc((i + 1) * (sizeof(char)));
	if (!ptr)
		return (0);
	if (n < 0)
	{
		n = n * (-1);
		ptr[0] = '-';
	}
	ptr[i] = '\0';
	while (n > 0)
	{
		i--;
		ptr[i] = (n % 10) + '0';
		n = n / 10;
	}
	return (ptr);
}
