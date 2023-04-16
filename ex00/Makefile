NAME = megaphone

FILE = megaphone.cpp

OBJ = $(FILE:.cpp=.o)

%.o: %.c
	g++ -Wall -Wextra -Werror -c  $< -o $@ 

all: $(NAME)

$(NAME): $(OBJ) 
	g++ -Wall -Wextra -Werror $(OBJ) -o $(NAME)

clean:
	rm -rf  $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

# .PHONY all clean fclean re 