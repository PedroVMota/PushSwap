# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pvital-m <pvital-m@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/03 14:41:56 by chales            #+#    #+#              #
#    Updated: 2023/05/18 18:06:44 by pvital-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

LIBFT = libft/libft.a

SRCS = src/*.c src/*/*.c #in case you want to create subfolders# #echo src/*.c src/*/*.c#

OBJS = $(SRCS:.c=.o)

INCLUDES = -I libft/libft_includes -I includes

CFLAGS = -g -Wall -Wextra -Werror $(INCLUDES)   #-fsanitize=address -fsanitize=leaks 

RM = rm -fr

all : $(NAME)

$(NAME):		$(SRCS) #$(OBJS) #For when the project is ready to deliver
				@make bonus -s -C libft
				@$(CC) $(CFLAGS) $(SRCS) $(LIBFT) -o $(NAME) #COMMENT#Switch $(SRCS) with $(OBJS) when ready#COMMENT#

clean:			
				@make clean -s -C libft
				@$(RM) $(OBJS)

fclean:			clean
				@make fclean -s -C libft
				@$(RM) $(NAME)

re:				fclean $(NAME)
				@make re -s -C libft

watch:
	@printf "Watching files..\n"
	@while true; do $(MAKE) -q --no-print-directory || $(MAKE) --no-print-directory; sleep 2; done;