CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC = \
	ft_bzero.c \
	ft_isdigit.c \
	ft_memcpy.c \
	ft_putnbr_fd.c \
	ft_striteri.c \
	ft_strmapi.c \
	ft_strtrim.c \
	ft_calloc.c \
	ft_isprint.c \
	ft_memmove.c \
	ft_putstr_fd.c \
	ft_strjoin.c \
	ft_strncmp.c \
	ft_substr.c \
	ft_isalnum.c \
	ft_itoa.c \
	ft_memset.c \
	ft_split.c \
	ft_strlcat.c \
	ft_strncpy.c \
	ft_tolower.c \
	ft_isalpha.c \
	ft_memchr.c \
	ft_putchar_fd.c \
	ft_strchr.c \
	ft_strlcpy.c \
	ft_strnstr.c \
	ft_toupper.c \
	ft_atoi.c \
	ft_isascii.c \
	ft_memcmp.c \
	ft_putendl_fd.c \
	ft_strdup.c \
	ft_strlen.c \
	ft_strrchr.c

OBJ = $(SRC:.c=.o)

NAME = libft.a

$(NAME): $(OBJ) 
	ar rcs $@ $^

$(OBJ): ./%.o: ./%.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

.PHONY: clean fclean re

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
