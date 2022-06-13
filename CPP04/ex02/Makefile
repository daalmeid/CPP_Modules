# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: daalmeid <daalmeid@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/26 16:48:15 by daalmeid          #+#    #+#              #
#    Updated: 2022/06/06 16:49:07 by daalmeid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

################## Program #################

NAME 	= 		AbstractAnimal

################## COLORS ##################

--GRN	=		\033[32m
--RED	=		\033[31m
--WHT	=		\033[39m

################## TERMINAL ################

RM		=		rm -f

################## COMPILER ################

CMP		=		c++
FLAGS	=		-Wall -Werror -Wextra -std=c++98

################## FILES ###################

SRCFILE	=		main.cpp\
				AAnimal.cpp\
				Cat.cpp\
				Dog.cpp\
				Brain.cpp

SRCCMP	=		$(addprefix srcs/, $(SRCFILE))

OBJS	=		$(patsubst srcs/%.cpp, srcs/%.o, $(SRCCMP))

################## RULES ###################

all: $(NAME)

srcs/%.o : srcs/%.cpp
	$(CMP) $(FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CMP) $(FLAGS) $(OBJS) -o $(NAME)

################## CLEAN ###################

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re