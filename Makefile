NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_atoi.c       ft_isalpha.c    ft_memchr.c     ft_memset.c     ft_strlcpy.c    ft_strrchr.c\
ft_bzero.c      ft_isascii.c    ft_memcmp.c     ft_strchr.c     ft_strlen.c     ft_tolower.c\
ft_calloc.c     ft_isdigit.c    ft_memcpy.c     ft_strdup.c     ft_strncmp.c    ft_toupper.c\
ft_isalnum.c    ft_isprint.c    ft_memmove.c    ft_strlcat.c    ft_strnstr.c    ft_substr.c\
ft_strjoin.c    ft_strtrim.c    ft_split.c    ft_itoa.c    ft_strmapi.c    ft_striteri.c\
ft_putchar_fd.c    ft_putstr_fd.c    ft_putendl_fd.c    ft_putnbr_fd.c
OBJS = $(SRCS:.c=.o)
BONUS_SRCS = ft_lstnew.c    ft_lstadd_front.c    ft_lstsize.c    ft_lstlast.c
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

$(OBJS): $(SRCS)
	$(CC) $(CFLAGS) -c $(SRCS)

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: $(BONUS_OBJS)
	ar rc $(NAME) $(BONUS_OBJS)

$(BONUS_OBJS): $(BONUS_SRCS)
	$(CC) $(CFLAGS) -c $(BONUS_SRCS)
