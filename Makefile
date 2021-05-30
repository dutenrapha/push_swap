SRC_PATH = ./src
OBJ_PATH = ./obj
LIB_PATH = ./lib
LIBFT_PATH = ./libft
INC_PATH = -I ./include

CC = gcc
FLAGS = -Wall -Wextra -Werror
LIB_NAME = libpswap.a
LIBFT_NAME = libft.a
MAIN = main.c
EXEC = push_swap

MAIN_O = $(MAIN:.c=.o)
LIB = $(LIB_PATH)/$(LIB_NAME)
LIBFT = $(LIBFT_PATH)/$(LIBFT_NAME)
SRC = $(notdir $(wildcard ./src/*.c))
OBJ=$(addprefix $(OBJ_PATH)/, $(SRC:.c=.o))

all: config	$(OBJ) $(EXEC)

config:
	@mkdir lib
	@mkdir obj

clean:
	@make clean -C $(LIBFT_PATH)
	@rm -fr obj
	@rm -fr $(LIB_PATH)
	@rm -f $(LIBFT_PATH)/*.a

fclean:	clean
	@rm -f $(EXEC)

re: fclean all

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.c
	@$(CC) $(FLAGS) $(INC_PATH) -g -c $< -o $@

$(EXEC): $(LIBFT)
	@$(CC) $(FLAGS) $(INC_PATH) $(OBJ) -L $(LIBFT_PATH) -lft -g -o $@

$(LIBFT):
	@make -C $(LIBFT_PATH)
