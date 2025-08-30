/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelmo <miguelmo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 21:38:51 by miguelmo          #+#    #+#             */
/*   Updated: 2025/03/07 19:09:31 by miguelmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	*ft_calloc(size_t nmeb, size_t size)
{
	void				*ptr;
	void				*cpy_ptr;
	unsigned long int	to_cmp;

	to_cmp = (unsigned long int)nmeb * (unsigned long int)size;
	if (!to_cmp || (to_cmp >= INT_MAX))
		return (malloc(0));
	ptr = malloc((nmeb) * size);
	if (!ptr)
		return (ptr);
	cpy_ptr = ptr;
	while (nmeb--)
	{
		ft_bzero(ptr, size);
		ptr += size;
	}
	return (cpy_ptr);
}
