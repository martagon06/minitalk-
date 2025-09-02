/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelmo <miguelmo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 18:26:28 by miguelmo          #+#    #+#             */
/*   Updated: 2025/09/02 11:13:13 by miguelmo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "minitalk.h"

int main(int argc, char **argv)
{
    int server_pid;
    char *message;
    int i;

    i = 0;
    if (argc != 3)
    {
        ft_printf("Usage: %s <server_pid> <message>\n", argv[0]);
        return(1);
    }

    server_pid = ft_atoi(argv[1]);
    message = argv[2];
    
    while(message[i])
    {
        send_char(server_pid, message[i]);
        i++;
    }
    return 0;
}

void send_char(pid_t server_pid, char c)
{
    int bit;

    bit = 0;
    while(bit < 8)
    {
        if((c >> bit) & 1)
            kill(server_pid, SIGUSR2);
        else
            kill(server_pid, SIGUSR1);
        usleep(100);
        bit++;
    }
}