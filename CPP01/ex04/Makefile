# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: daalmeid <daalmeid@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/26 16:48:15 by daalmeid          #+#    #+#              #
#    Updated: 2022/05/24 09:34:10 by daalmeid         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

################## Program #################

NAME 	= 		HomemadeSed

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

SRCS	=		main.cpp

OBJS	=		$(addprefix srcs/, $(SRCS:.cpp=.o))

################## RULES ###################

all: $(NAME)

$(NAME): $(OBJS)
	$(CMP) $(FLAGS) $(OBJS) -o $(NAME)


################## CLEAN ###################

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

test: $(NAME)
	./$(NAME) Makefile "*" Y
	./$(NAME) test.txt " " ""
	./$(NAME) srcs/main.cpp "" "jfdds"

.PHONY: all clean fclean re test