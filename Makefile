NAME = libft.a

HEADER = libft.h

SRCS = ft_atoi.c		\
	ft_isascii.c		\
	ft_isalnum.c		\
	ft_isalpha.c		\
	ft_isdigit.c		\
	ft_isprint.c		\
	ft_split.c			\
	ft_strjoin.c		\
	ft_strdup.c			\
	ft_strlcpy.c		\
	ft_strlcat.c		\
	ft_strlen.c			\
	ft_strnstr.c		\
	ft_tolower.c		\
	ft_toupper.c		\
	ft_itoa.c			\
	ft_memcmp.c			\
	ft_memcpy.c			\
	ft_putstr_fd.c		\
	ft_putchar_fd.c		\
	ft_putnbr_fd.c		\
	ft_calloc.c			\
	ft_putendl_fd.c		\
	ft_strncmp.c		\
	ft_bzero.c			\
	ft_strchr.c			\
	ft_strrchr.c		\
	ft_memmove.c 		\
	ft_memset.c 		\
	ft_memchr.c 		\
	ft_substr.c 		\
	ft_strmapi.c 		\
	ft_striteri.c 		\
	ft_strtrim.c

BONUS = ft_lstnew_bonus.c	\
	ft_lstadd_front_bonus.c	\
	ft_lstsize_bonus.c		\
	ft_lstlast_bonus.c		\
	ft_lstadd_back_bonus.c	\
	ft_lstdelone_bonus.c	\
	ft_lstclear_bonus.c		\
	ft_lstiter_bonus.c		\
	ft_lstmap_bonus.c

CC=cc

CCFLAGS=-Wall -Werror -Wextra

RM=rm -rf

OBJS=${SRCS:.c=.o}

BONUSOBJS=${BONUS:.c=.o}

all: ${NAME}

$(NAME): ${OBJS}
	ar -rc $(NAME) ${OBJS}

%.o:%.c
	${CC} ${CFLAGS} -c $< -o $@ -I.

bonus: ${OBJS} ${BONUSOBJS}
	ar rc $(NAME) ${OBJS} ${BONUSOBJS}

clean:
	@${RM} ${OBJS} ${BONUSOBJS}
	@echo "\033[0;32mObject files have been deleted\033[0m"

fclean: clean
	@${RM} ${NAME}
	@echo "\033[0;32mArchive file ${NAME} has been deleted\033[0m"

re: fclean all

.PHONY:
	clean all fclean re bonus title
