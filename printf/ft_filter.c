/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_filter.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelmo <miguelmo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 23:22:49 by miguelmo          #+#    #+#             */
/*   Updated: 2025/03/10 19:25:03 by miguelmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_filter(char const c, va_list args)
{
	if (c == 'c')
		return (ft_putchar(args));
	if (c == 's')
		return (ft_print_string(args));
	if (c == 'p')
		return (ft_printpunt(args));
	if (c == 'd')
		return (ft_print_int(args));
	if (c == 'i')
		return (ft_print_int(args));
	if (c == 'u')
		return (ft_print_unsigned_int(args));
	if (c == 'x')
		return (ft_hexa_min(args));
	if (c == 'X')
		return (ft_hexa_max(args));
	return (0);
}
