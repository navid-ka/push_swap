# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bifrost <nkeyani-@student.42barcelona.c    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/08 15:03:56 by nkeyani-          #+#    #+#              #
#    Updated: 2023/07/13 19:57:46 by bifrost          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = $(BINDIR)/push_swap
CFLAGS = -Wall -Werror -Wextra -g
SRCDIR = src
OBJDIR = obj
BINDIR = bin
SRC = src/push_swap.c src/papb.c src/swap_stack.c src/utils.c \
src/stack_init.c
OBJECTS = $(patsubst $(SRCDIR)/%.c,$(OBJDIR)/%.o,$(SRC))
COLOR_RESET = $(shell tput sgr0)
COLOR = $(shell tput setaf 2)
KAOMOJI_SUCCESS = (づ ᴗ _ᴗ)づ♡
KAOMOJI_REMOVE = (ノಠ益ಠ)ノ彡┻━┻

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@printf "$(COLOR)\rCompiling (╮°-°)╮┳━┳ : $(COLOR_RESET)$<"
	@mkdir -p $(@D)
	@$(CC) $(CFLAGS) -c $< -o $@

${NAME}: ${OBJECTS}
	@mkdir -p $(@D)
	@$(MAKE) -C include/libft
	@$(CC) $(CFLAGS) -o ${NAME} ${OBJECTS} -Linclude/libft include/libft/bin/libft.a
	@printf "\n$(COLOR)$(KAOMOJI_SUCCESS) Successfully compiled!$(COLOR_RESET)"

all: ${NAME}

fclean: clean
	@rm -rf ${BINDIR}
	@$(MAKE) -C include/libft fclean

clean:
	@echo "$(COLOR)$(KAOMOJI_REMOVE)$(COLOR_RESET)"
	@rm -rf ${OBJDIR}

re: fclean all

git: fclean
	@echo "Commit:"
	@read MSG; \
	git commit -am "$$MSG"
	git push

.PHONY: clean all fclean re
