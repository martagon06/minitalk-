/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelmo <miguelmo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 18:40:07 by miguelmo          #+#    #+#             */
/*   Updated: 2024/12/17 18:55:39 by miguelmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_len_int(long n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
		len += 1;
	while (n != 0)
	{
		len += 1;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;
	long	nl;

	nl = (long)n;
	len = ft_len_int(nl);
	str = (char *)malloc(sizeof(char) * (len +1));
	if (!str)
		return (NULL);
	if (nl < 0)
	{
		str[0] = '-';
		nl *= -1;
	}
	str[len] = '\0';
	len--;
	str[len] = (nl % 10) + '0';
	nl /= 10;
	while (nl != 0)
	{
		str[--len] = (nl % 10) + '0';
		nl /= 10;
	}
	return (str);
}
