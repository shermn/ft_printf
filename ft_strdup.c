/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoncalv <sgoncalv@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/27 14:24:24 by sgoncalv          #+#    #+#             */
/*   Updated: 2023/01/27 14:28:49 by sgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	char	*src;
	int		i;
	int		c;

	c = 0;
	i = ft_strlen((const char *) s1);
	str = (char *) malloc(i + 1);
	if (!str)
		return (0);
	src = (char *) s1;
	while (src[c] != '\0')
	{
		str[c] = src[c];
		c++;
	}
	str[c] = '\0';
	return (str);
}