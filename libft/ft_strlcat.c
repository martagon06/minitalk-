/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelmo <miguelmo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 13:40:32 by miguelmo          #+#    #+#             */
/*   Updated: 2024/12/28 11:30:52 by miguelmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned long	ft_strlcat(char *dest, const char *src, unsigned long size)
{
	unsigned long	i;
	unsigned long	dest_length;
	unsigned long	src_length;

	dest_length = ft_strlen(dest);
	src_length = ft_strlen(src);
	if (size <= dest_length)
		return (size + src_length);
	i = 0;
	while (src[i] && (dest_length + i) < (size - 1))
	{
		dest[dest_length + i] = src[i];
		i++;
	}
	dest[dest_length + i] = '\0';
	return (dest_length + src_length);
}
