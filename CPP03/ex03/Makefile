# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: daalmeid <daalmeid@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/26 16:48:15 by daalmeid          #+#    #+#              #
#    Updated: 2022/06/02 15:53:17 by daalmeid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

################## Program #################

NAME 	= 		DiamondTrap

################## COLORS ##################

--GRN	=		\033[32m
--RED	=		\033[31m
--WHT	=		\033[39m

################## TERMINAL ################

RM		=		rm -f

################## COMPILER ################

CMP		=		c++
FLAGS	=		-Wall -Werror -Wextra -std=c++98 -Wshadow -Wno-shadow

################## FILES ###################

SRCFILE	=		main.cpp\
				ClapTrap.cpp\
				FragTrap.cpp\
				ScavTrap.cpp\
				DiamondTrap.cpp

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