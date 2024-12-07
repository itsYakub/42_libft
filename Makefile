CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = $(wildcard ./*.c)
OBJ = $(patsubst ./%.c, ./%.o, $(SRC))
TARGET = libft.a

$(TARGET): $(OBJ) 
	ar rcs $@ $^

$(OBJ): ./%.o: ./%.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(TARGET)

.PHONY clean fclean re

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(TARGET)

re: fclean all


