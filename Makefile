# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pvital-m <pvital-m@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/03 14:41:56 by chales            #+#    #+#              #
#    Updated: 2023/05/19 15:58:19 by pvital-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

LIBFT = libft/libft.a

SRCS =	./src/memory/leaks_delete.c \
		./src/main.c \
		./src/stacks/declaration.c \
		./src/stacks/stack_creation.c \
		./src/stacks/information.c \
		./src/algorithm/best_buddy.c \
		./src/algorithm/ft_sort_five.c \
		./src/algorithm/best_buddy_utils.c \
		./src/algorithm/ft_sort_tree.c \
		./src/moves/rotate.c \
		./src/moves/others.c \
		./src/moves/push.c \
		./src/moves/swaps.c \
		./src/moves/reverse_rotate.c \
		./src/useless/stack_print.c \

OBJS = $(SRCS:.c=.o)

INCLUDES = -I libft/libft_includes -I includes

CFLAGS = -g -Wall -Wextra -Werror $(INCLUDES)

RM = rm -fr

all : $(NAME)

$(NAME):		$(OBJS)
				@make bonus -s -C libft
				@$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

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