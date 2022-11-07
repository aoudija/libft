
NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
DEPS = libft.h
FILES = ft_isdigit.c ft_memset.c ft_strjoin.c ft_strtrim.c ft_isprint.c\
		ft_strlcat.c ft_atoi.c ft_substr.c ft_putchar_fd.c\
		ft_strlcpy.c ft_tolower.c ft_bzero.c  ft_strlen.c ft_putstr_fd.c\
		ft_toupper.c ft_calloc.c ft_memchr.c ft_isalnum.c ft_striteri.c ft_putendl_fd.c\
		ft_memcmp.c ft_split.c ft_strncmp.c ft_putnbr_fd.c ft_isalpha.c ft_memcpy.c ft_strchr.c\
		ft_strnstr.c ft_isascii.c ft_memmove.c ft_strdup.c ft_strrchr.c ft_itoa.c ft_strmapi.c
FILESB = ft_lstadd_back.c ft_lstiter.c ft_lstsize.c ft_lstdelone.c ft_lstnew.c ft_lstclear.c\
		 ft_lstadd_front.c ft_lstlast.c

OBGB = $(FILESB:.c=.o)

OBG = $(FILES:.c=.o)

%.o:%.c $(DEPS)
	$(CC) $(CFLAGS) -c $<

all:$(NAME)

$(NAME):$(OBG)
	ar rc $(NAME) $(OBG)

clean:
	rm -f $(OBG) $(OBGB)

fclean: clean
	rm -f $(NAME)

re:fclean all

bonus:$(NAME) $(OBGB)
	ar rc $(NAME) $(OBGB)
