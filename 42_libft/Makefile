CC = cc

CFLAGS = -Wall -Wextra -Werror -c

NAME = libft.a

SRC = \
	ft_atoi.c \
	ft_bzero.c \
	ft_calloc.c \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_itoa.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_memset.c \
	ft_putchar_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	ft_putstr_fd.c \
	ft_split.c \
	ft_strchr.c \
	ft_strdup.c \
	ft_striteri.c \
	ft_strjoin.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_strlen.c \
	ft_strmapi.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_strrchr.c \
	ft_strtrim.c \
	ft_substr.c \
	ft_tolower.c \
	ft_toupper.c
OBJ = $(addprefix $(ODIR)/, $(SRC:.c=.o))

BSRC = \
	$(SRC) \
	bonus/ft_lstadd_back.c \
	bonus/ft_lstadd_front.c \
	bonus/ft_lstclear.c \
	bonus/ft_lstdelone.c \
	bonus/ft_lstiter.c \
	bonus/ft_lstlast.c \
	bonus/ft_lstmap.c \
	bonus/ft_lstnew.c \
	bonus/ft_lstsize.c
BOBJ = $(addprefix $(ODIR)/, $(BSRC:.c=.o))

ODIR = obj

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

bonus: $(BOBJ)
	ar rcs $(NAME) $(BOBJ)

$(ODIR)/%.o:%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -o $@ $<


clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all bonus
