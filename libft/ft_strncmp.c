/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelmo <miguelmo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 13:45:11 by miguelmo          #+#    #+#             */
/*   Updated: 2024/12/17 18:53:17 by miguelmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str, const char *str2, unsigned long c)
{
	size_t			i;
	unsigned int	diff;

	i = 0;
	diff = 0;
	while ((str[i] != 0) && (str2 != 0) && (diff == 0) && (i < c))
	{
		diff = ((unsigned char)str[i] - (unsigned char)str2[i]);
		i++;
	}
	if ((diff == 0) && (i < c))
		diff = ((unsigned char)str[i] - (unsigned char)str2[i]);
	return (diff);
}
