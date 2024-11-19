NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
SRCS =  ft_atoi.c \
	ft_putchar_fd.c \
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
	ft_putnbr_fd.c \
	ft_putendl_fd.c \
	ft_putstr_fd.c \
	ft_split.c \
	ft_substr.c \
	ft_strchr.c \
	ft_strchr.c \
	ft_strdup.c \
	ft_strtrim.c \
	ft_strlcat.c \
	ft_strlcpy.c \
	ft_strlen.c \
	ft_strjoin.c \
	ft_strncmp.c \
	ft_strnstr.c \
	ft_strrchr.c \
	ft_tolower.c \
	ft_toupper.c \
	ft_split.c \
	ft_strmapi.c \
	ft_striteri.c \
	
	

	SRCS_BONUS =  ft_lstnew_bonus.c \
	ft_lstadd_front_bonus.c \
	ft_lstsize_bonus.c \
	ft_lstadd_back_bonus.c \
	ft_lstdelone_bonus.c \
	ft_lstlast_bonus.c \
	ft_lstclear_bonus.c \
	ft_lstiter_bonus.c \
	ft_lstmap_bonus.c \

# Definición de variablesc
OBJS = $(SRCS:.c=.o)
OBJS_BONUS	= ${SRCS_BONUS:.c=.o}
# Regla para construir el objetivo "all"
all: $(NAME)

# Regla para construir el objetivo "$(NAME)"
$(NAME): $(OBJS)
	ar rcs $@ $^

# Regla para construir los archivos objeto
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Regla para limpiar los archivos objeto
clean:
	rm -f $(OBJS) ${OBJS_BONUS}

# Regla para limpiar los archivos objeto y el objetivo "$(NAME)"
fclean: clean
	rm -f $(NAME)

# Regla para reconstruir el objetivo "$(NAME)" desde cero
re: fclean all

# Reglas que no corresponden a archivos
.PHONY: all clean fclean re

bonus:		${OBJS_BONUS} libft.h
			ar rcs ${NAME} ${OBJS_BONUS}

