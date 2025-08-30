/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelmo <miguelmo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 13:16:42 by miguelmo          #+#    #+#             */
/*   Updated: 2024/12/28 11:25:33 by miguelmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	char		*d;
	const char	*s;

	d = (char *)dest;
	s = (char *)src;
	if (s < d)
		while (size-- != 0)
			d[size] = s[size];
	else
		return (ft_memcpy(dest, src, size));
	return (d);
}
