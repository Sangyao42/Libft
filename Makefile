NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_atoi.c       ft_isalpha.c    ft_memchr.c     ft_memset.c     ft_strlcpy.c    ft_strrchr.c\
ft_bzero.c      ft_isascii.c    ft_memcmp.c     ft_strchr.c     ft_strlen.c     ft_tolower.c\
ft_calloc.c     ft_isdigit.c    ft_memcpy.c     ft_strdup.c     ft_strncmp.c    ft_toupper.c\
ft_isalnum.c    ft_isprint.c    ft_memmove.c    ft_strlcat.c    ft_strnstr.c    ft_substr.c\
ft_strjoin.c    ft_strtrim.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $(SRCS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

