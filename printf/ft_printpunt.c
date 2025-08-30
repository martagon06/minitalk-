/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printpunt.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelmo <miguelmo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 20:38:17 by miguelmo          #+#    #+#             */
/*   Updated: 2025/03/10 19:02:32 by miguelmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printpunt(va_list args)
{
	char	*ret;
	void	*ptr;
	int		cont;

	ptr = va_arg(args, void *);
	if (!ptr)
	{
		write(1, "(nil)", 5);
		return (5);
	}
	ret = ft_pointer_to_hex((uintptr_t)ptr);
	cont = ft_strlen(ret);
	write(1, "0x", 2);
	write(1, ret, cont);
	free(ret);
	return (cont + 2);
}
