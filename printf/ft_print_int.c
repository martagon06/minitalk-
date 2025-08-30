/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelmo <miguelmo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 21:16:56 by miguelmo          #+#    #+#             */
/*   Updated: 2025/03/10 17:22:50 by miguelmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_int(va_list args)
{
	char	*str;
	int		ret;

	if (!args)
		return (0);
	str = ft_itoa(va_arg(args, int));
	ret = (int)ft_strlen(str);
	write(1, str, ret);
	free(str);
	return (ret);
}
