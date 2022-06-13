# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: daalmeid <daalmeid@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/26 16:48:15 by daalmeid          #+#    #+#              #
#    Updated: 2022/05/31 15:53:51 by daalmeid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

################## Program #################

NAME 	= 		BSP

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
				Fixed.cpp\
				Point.cpp\
				bsp.cpp

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

.PHONY: all fclean clean re