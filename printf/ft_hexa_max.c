/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_max.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelmo <miguelmo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 20:47:41 by miguelmo          #+#    #+#             */
/*   Updated: 2025/03/04 21:16:14 by miguelmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexa_max(va_list args)
{
	char	*str;
	int		cont;

	str = ft_to_hex(va_arg(args, unsigned int), 1);
	if (!str)
		return (0);
	cont = ft_strlen(str);
	write(1, str, cont);
	free(str);
	return (cont);
}
