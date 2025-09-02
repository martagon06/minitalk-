/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miguelmo <miguelmo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 19:51:02 by miguelmo          #+#    #+#             */
/*   Updated: 2025/09/02 11:13:19 by miguelmo         ###   ########.fr       */
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
    ft_printf("Server running with PID: %d\n", server_pid);
    signal(SIGUSR1, handle_signal);
    signal (SIGUSR2, handle_signal);
    ft_printf("Waiting for signals'\n'");
    while(1)
        pause();
    return 0;
}

void handle_signal(int sig)
{
    static int bit_count;
    static unsigned char char_acc;
    
    bit_count = 0;
    char_acc = 0;
    if(sig == SIGUSR2)
        char_acc |= (1 << bit_count);
    bit_count++;
    if (bit_count == 8)
    {
        ft_printf("%c", char_acc);
        bit_count = 0;
        char_acc = 0;
    }
}