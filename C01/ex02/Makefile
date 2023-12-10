NAME	= ptrref

SRC		= main.cpp 
OBJ		= $(SRC:%.cpp=%.o)

CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -f

%.o:%.cpp
	$(CC) $(FLAGS) -c $< -o $(<:.cpp=.o)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

# What: will give you the list of directories inside a given directory without going into subdirectories. 
# You may need to clean that list up since it will include . and ./ before every directory listed.
SUBDIRS := $(shell find ../../C*/ex* -maxdepth 1 -type d)
# What: esegue fclean da tutte le subdir di C00/ poi fai il git push
# info: da error-msg  se nella subdir non esiste il makefile
push: 
	for dir in $(SUBDIRS); do \
       (cd $$dir && make fclean 2> /dev/null)\
    done
	@read -p "Enter comment for git push:" comment;\
	(cd .. && git add . && git commit -m "$$comment"  && git push )\

status:
	(cd ../.. && pwd && git status)


.PHONY: all clean fclean re push