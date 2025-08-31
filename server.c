/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelmo <miguelmo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 19:51:02 by miguelmo          #+#    #+#             */
/*   Updated: 2025/08/31 18:40:35 by miguelmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int main(int argc, char **argv)
{
    pid_t server_pid;
    (void)argv;
    if(argc != 1)
    {
        ft_printf("Server must'n have more than 1 argument (./server)\n");
        exit(1);
    }
    server_pid = getpid;
    ft_printf("PID number of the server ")

    return 0;
}

void signal_handler(int sig)
{

}