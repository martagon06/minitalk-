/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelmo <miguelmo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 20:32:01 by miguelmo          #+#    #+#             */
/*   Updated: 2025/03/10 19:02:41 by miguelmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

// aqui se ponen todas las librerias que valla a necesitar/

# include <unistd.h>
# include <limits.h>
# include <stdarg.h>
# include <stdlib.h>
# include <stdint.h>

int		ft_printf(char const *s, ...);
int		ft_filter(char const s, va_list args);
int		ft_print_string(va_list args);
int		ft_putchar(va_list args);
int		ft_putnbr(va_list args);
int		ft_hexa_max(va_list args);
int		ft_hexa_min(va_list args);
int		ft_print_int(va_list args);
int		ft_print_unsigned_int(va_list args);
int		ft_printpunt(va_list args);
char	*ft_to_hex(unsigned long int num, int mode);
size_t	hex_num_len(unsigned long long int num);
char	*ft_itoa(int n);
size_t	ft_strlen(const char *s);
void	*ft_calloc(size_t nmeb, size_t size);
void	ft_bzero(void *str, size_t size);
char	*ft_uitoa(unsigned int n);
char	*ft_pointer_to_hex(uintptr_t int_ptr);

#endif 
