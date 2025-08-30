/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelmo <miguelmo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 14:17:09 by miguelmo          #+#    #+#             */
/*   Updated: 2025/03/10 17:23:32 by miguelmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_string(va_list args)
{
	char	*str;

	str = va_arg(args, char *);
	if (!str)
	{
		write (1, "(null)", 6);
		return (6);
	}
	write (1, str, ft_strlen(str));
	return (ft_strlen(str));
}
