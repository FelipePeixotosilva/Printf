# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fpeixoto <fpeixoto@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/02 17:45:45 by fpeixoto          #+#    #+#              #
#    Updated: 2022/07/02 17:46:40 by fpeixoto         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
OBJS  = ft_printf.c
NAME	= libftprintf.a
CC		= cc 
RM		= rm -f 
CFLAGS	= -Wall -Wextra -Werror

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
