SRCS		= main.cpp \
			  Bureaucrat.cpp \
			  Form.cpp \
			  ShruberryCreationForm.cpp \
			  RobotomyRequestForm.cpp \
			  PresidentialPardonForm.cpp \
			  Intern.cpp

OBJS		= $(addprefix $(OBJS_DIR), $(SRCS:.cpp=.o))

INCLUDE		= -I .

OBJS_DIR	= objs/

CC			= clang++

CPPFLAGS	= -Wall -Werror -Wextra -std=c++98

NAME		= bureaucrat

all			: $(NAME)

$(OBJS_DIR)%.o	: ./%.cpp
			  	  $(CC) $(CPPFLAGS) $(INCLUDE) -c $< -o $@

$(NAME)		: $(OBJS_DIR) $(OBJS)
			  $(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

$(OBJS_DIR)	:
			  @mkdir $(OBJS_DIR)

clean		:
		 	 rm -rf $(OBJS_DIR) $(wildcard *_shruberry)

fclean		: clean
		 	 rm -rf $(NAME)

re			: clean all

.PHONY		: all clean re