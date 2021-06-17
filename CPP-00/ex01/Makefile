SRCS		= main.cpp \
			  Contact.cpp

OBJS		:=	$(SRCS:%.cpp=%.o)

INCLUDE		= -I .

CC			= clang++

CPPFLAGS	= -Wall -Werror -Wextra -std=c++98

NAME		= phonebook

all			: $(NAME)

%.o			: %.cpp
			  $(CC) -c $(CPPFLAGS) $(INCLUDE) $< -o $@

$(NAME)		: $(OBJS)
			  $(CC) $(CPPFLAGS) $(INCLUDE) $(OBJS) -o $(NAME)

clean		:
		 	 rm -rf $(OBJS)

fclean		: clean
		 	 rm -rf $(NAME)

re			: clean all

.PHONY		: all clean re