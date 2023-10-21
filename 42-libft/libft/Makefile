srcs = ft_strlen.c ft_bzero.c ft_isalpha.c ft_isalnum.c ft_isascii.c\
ft_isdigit.c ft_isprint.c ft_memcpy.c ft_memset.c ft_strlcat.c\
ft_strlcpy.c ft_memmove.c ft_atoi.c ft_strchr.c ft_strrchr.c\
ft_toupper.c ft_tolower.c ft_strncmp.c ft_calloc.c ft_strdup.c\
ft_substr.c ft_strjoin.c ft_strtrim.c ft_strnstr.c ft_memchr.c\
ft_memcmp.c ft_split.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_strmapi.c ft_itoa.c ft_putnbr_fd.c ft_striteri.c

CC = gcc
CCFLAG = -Wall -Wextra -Werror
name = libft.a
objs = ${srcs:.c=.o}
LIBC = ar rc 

all : ${name}

${name} : ${objs}
	${LIBC} ${name} ${objs}

${objs} :
	${CC} -c ${CCFLAG} ${srcs}

clean :
	rm -rf ${objs}

fclean: clean
	rm -rf ${name} 
	
re: fclean all

.PHONY: all clean fclean re