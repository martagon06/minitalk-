/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex_num_len.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelmo <miguelmo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 21:10:08 by miguelmo          #+#    #+#             */
/*   Updated: 2025/03/04 21:25:58 by miguelmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	hex_num_len(unsigned long long int num)
{
	size_t	cont;

	cont = 0;
	if (!num)
		return (1);
	while (num > 0)
	{
		num /= 16;
		cont++;
	}
	return (cont);
}
