
SRC = $(addsuffix .c, main ft_isalpha ft_isdigit ft_isalnum ft_isascii ft_isprint ft_atoi ft_bzero ft_calloc ft_memchr ft_memcmp ft_memcpy ft_memmove ft_memset ft_strchr ft_strdup ft_strlcat ft_strlen ft_strncmp ft_strnstr ft_strrchr ft_tolower ft_toupper ft_substr ft_strtrim ft_strdup ft_strjoin ft_lstnew)


OBJS := $(SRC:%.c=%.o)


#BONUS_SRC = $(addprefix bonus/, $(addsuffix _bonus.c, ft_lstnew ft_lstadd_back ft_lstadd_front))


#BONUS_OBJS := $(BONUS_SRC:%.c=%.o)


#SUPP_SRC = $(addprefix supp/, $(addsuffix .c, ft_putchar ft_putstr ft_putnbr))

#SUPP_OBJS := $(SUPP_SRC:%.c=%.o)


NAME = executable

CC = gcc

CCFLAGS = -Wall -Werror -Wextra


INC_DIR = .

CPPFLAGS = -I$(INC_DIR)

OBJS_BASBO = $(OBJS) $(BONUS_OBJS)


OBJS_ALL = $(OBJS_BASBO) $(SUPP_OBJS)


RM = rm -f



all: $(NAME)


$(NAME): $(OBJS)
	$(CC) $(CCFLAGS) $^ -o $@


%.o: %.c
	$(CC) $(CPPFLAGS) $(CCFLAGS) -c $< -o $@


clean:
	$(RM) $(OBJS_ALL)

fclean: clean
	$(RM) $(NAME)


re: fclean all


bonus: $(OBJS_BASBO)
	$(CC) $(CCFLAGS) $? -o $(NAME)


everything: $(OBJS_ALL)
	$(CC) $(CCFLAGS) $? -o $(NAME)


.PHONY: all clean fclean re bonus everything