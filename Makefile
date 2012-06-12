##
## Makefile for  in /home/pinty_f//Desktop/perso/rebellion
## 
## Made by felix pinty
## Login   <pinty_f@epitech.net>
## 
## Started on  Thu Jun  7 18:38:35 2012 felix pinty
## Last update Tue Jun 12 16:26:11 2012 felix pinty
##

CC      =       g++

CFLAGS  =       -W -Wall -Wextra -lm


NAME    =       $(BINDIR)/rebellion

OBJDIR  =       obj
BINDIR  =       bin
SRCDIR  =	src

VPATH           = src:obj/src:obj


SRC=		main.cpp	\
		personnel.cpp	\
		planete.cpp	\
		flotte.cpp	\


OBJ             = $(addprefix $(OBJDIR)/, $(SRC:.cpp=.o))

$(NAME):	$(OBJ)
		$(CC) -o  $@ $^
		@echo "Done."

all :		$(NAME)

$(OBJDIR)/%.o:	%.cpp
		mkdir -p $(@D)
		$(CC) -o $@ -c $^ $(CFLAGS)

clean :
		@rm -rf $(OBJDIR)/*.o

fclean :	clean
		@rm -rf $(NAME)
		@echo "fclean done"

re :		fclean all
