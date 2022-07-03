# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fpeixoto <fpeixoto@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/02 17:45:45 by fpeixoto          #+#    #+#              #
#    Updated: 2022/07/03 18:07:42 by fpeixoto         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintd.a
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
