
NAME		= Colleen

SRC_DIR		= ./
OBJ_DIR		= object/

CC			= gcc

CFLAGS		= -Wall -Wextra -Werror

NAME_FILE   = ./Colleen.c

OBJ         = $(patsubst $(SRC_DIR)%.c, $(OBJ_DIR)%.o, $(NAME_FILE))
DEPENDS     = $(patsubst $(SRC_DIR)%.c, $(OBJ_DIR)%.d, $(NAME_FILE))

# **************************************************************************** #

$(OBJ_DIR)%.o: $(SRC_DIR)%.c Makefile
	@ mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -MMD -MP -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME) tmp_Colleen

re: fclean all

# **************************************************************************** #
#   Linux                                                                      #
# **************************************************************************** #

valgrind_memcheck_fd: $(OBJ)
	valgrind --tool=memcheck --track-origins=yes --leak-check=full --show-leak-kinds=all --track-fds=yes ./$(NAME)

valgrind_memcheck: $(OBJ)
	valgrind --tool=memcheck --track-origins=yes --leak-check=full --show-leak-kinds=all ./$(NAME)

valgrind_helgrind: $(OBJ)
	valgrind --tool=helgrind --history-level=full ./$(NAME)

# **************************************************************************** #
#   MacOS                                                                      #
# **************************************************************************** #

leaks: $(NAME)
	@leaks --atExit -- ./$(NAME)

# **************************************************************************** #

.PHONY: all clean fclean re valgrind_memcheck_fd valgrind_memcheck valgrind_helgrind leaks

-include $(DEPENDS)
