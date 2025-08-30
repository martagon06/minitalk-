/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_min.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelmo <miguelmo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 21:12:45 by miguelmo          #+#    #+#             */
/*   Updated: 2025/03/10 10:24:47 by miguelmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hexa_min(va_list args)
{
	char	*str;
	int		cont;

	str = ft_to_hex(va_arg(args, unsigned int), 0);
	if (!str)
		return (0);
	cont = ft_strlen(str);
	write (1, str, cont);
	free(str);
	return (cont);
}
