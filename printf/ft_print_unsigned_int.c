/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned_int.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelmo <miguelmo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 21:21:30 by miguelmo          #+#    #+#             */
/*   Updated: 2025/03/04 21:22:07 by miguelmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned_int(va_list args)
{
	char			*str;
	int				ret;
	unsigned int	num;

	num = va_arg(args, unsigned int);
	str = ft_uitoa(num);
	ret = (int)ft_strlen(str);
	write(1, str, ret);
	free(str);
	return (ret);
}
