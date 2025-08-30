/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_to_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelmo <miguelmo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 20:58:03 by miguelmo          #+#    #+#             */
/*   Updated: 2025/03/04 21:12:39 by miguelmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_to_hex(unsigned long int num, int mode)
{
	char	*base;
	char	*ret;
	size_t	cont;

	if (!mode)
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	cont = hex_num_len(num);
	ret = (char *)ft_calloc(1, cont +1);
	if (!ret)
		return (NULL);
	ret[cont] = 0;
	if (!num)
		ret[--cont] = '0';
	while (num > 0)
	{
		cont--;
		ret[cont] = base[num % 16];
		num /= 16;
	}
	return (ret);
}
