# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: miguelmo <miguelmo@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/30 18:25:59 by miguelmo          #+#    #+#              #
#    Updated: 2025/08/31 18:40:32 by miguelmo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SERVER  = server
CLIENT  = client

SERVER_SRC = server.c
CLIENT_SRC = client.c

SERVER_OBJ = $(SERVER_SRC:.c=.o)
CLIENT_OBJ = $(CLIENT_SRC:.c=.o)

LIBFT_DIR		= libft
LIBFT			= $(LIBFT_DIR)/libft.a

PRINTF_DIR		= printf
PRINTF			= $(PRINTF_DIR)/printf.a

CC      = gcc
CFLAGS  = -Wall -Wextra -Werror
RM      = rm -f

all: $(LIBFT) $(PRINTF) $(SERVER) $(CLIENT)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

$(PRINTF):
	$(MAKE) -C $(PRINTF_DIR)
    
$(SERVER): $(SERVER_OBJ) $(LIBFT) $(PRINTF)
	$(CC) $(CFLAGS) -o $@ $^

$(CLIENT): $(CLIENT_OBJ) $(LIBFT) $(PRINTF)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	$(RM) $(SERVER_OBJ) $(CLIENT_OBJ)
	$(MAKE) -C $(LIBFT_DIR) clean
	$(MAKE) -C $(PRINTF_DIR) clean

fclean: clean
	$(RM) $(SERVER) $(CLIENT)
	$(MAKE) -C $(LIBFT_DIR) fclean
	$(MAKE) -C $(PRINTF_DIR) fclean

re: fclean all

.PHONY: all clean fclean re
