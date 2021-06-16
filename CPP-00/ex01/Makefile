SRCS		= main.cpp

OBJS		:=	$(SRCS:%.cpp=%.o)

CC			= clang++

CPPFLAGS	= -Wall -Werror -Wextra -std=c++98

NAME		= phonebook

all			: $(NAME)

%.o			: %.cpp
			  $(CC) -c $(CPPFLAGS) $< -o $@

$(NAME)		: $(OBJS) main.cpp
			  $(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean		:
		 	 rm -rf $(OBJS)

fclean		: clean
		 	 rm -rf $(NAME)

re			: clean all

.PHONY		: all clean re