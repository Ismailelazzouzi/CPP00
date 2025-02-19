NAME = megaphone
CPP = c++
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

FILES = megaphone

SRCS = $(addsuffix .cpp, $(FILES))

OBJS = $(addsuffix .o, $(FILES))

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(CFLAGS) $^ -o $@

%.o: %.c
	$(CPP) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean