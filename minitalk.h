/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelmo <miguelmo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 19:43:49 by miguelmo          #+#    #+#             */
/*   Updated: 2025/09/02 11:41:28 by miguelmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <signal.h>
# include <stdlib.h>
# include <sys/types.h>
# include <unistd.h>
# include "libft/libft.h"
# include "printf/ft_printf.h"

int		ft_printf(const char *format, ...);
int		ft_atoi(const char *str);
void	send_char(pid_t server_pid, char c);
void	handle_signal(int sig);

#endif
