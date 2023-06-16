# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nkeyani- < nkeyani-@student.42barcelona    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/08 15:03:56 by nkeyani-          #+#    #+#              #
#    Updated: 2023/06/16 14:17:14 by nkeyani-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
CFLAGS = -Wall -Werror -Wextra -L./$(LIBFT) include/libft/bin/libft.a -I./$(LIBFT)
LIBFT= libft/
OBJECTS_SRV = main.c
COLOR_RESET = \033[0m
COLOR = \033[32m
KAOMOJI_SUCCESS = (づ ᴗ _ᴗ)づ♡
KAOMOJI_REMOVE = (ノಠ益ಠ)ノ彡┻━┻

$(NAME): make_lib ${OBJECTS} 
	@cc ${CFLAGS} ${OBJECTS_SRV} -o ${NAME}
	@printf "$(COLOR)Server program compiled successfully!$(COLOR_RESET)\n"

all: make_lib ${NAME}

make_lib:
	@make -C $(LIBFT) --no-print-director

fclean: clean
	@make fclean -C $(LIBFT) --no-print-director
	@rm -rf  ${NAME} 
	@printf "$(COLOR)Cleaned directory! $(KAOMOJI_REMOVE)$(COLOR_RESET)\n"

clean:
	@make clean -C $(LIBFT) --no-print-director
	@rm -f ${NAME}
	@printf "$(COLOR)Cleaned object files! $(KAOMOJI_REMOVE)$(COLOR_RESET)\n"

re: fclean all

git: fclean
	@echo "Commit:"
	@read MSG; \
	git commit -am "$$MSG"
	git push

.PHONY: clean all fclean re server client