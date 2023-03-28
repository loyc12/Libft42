# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: llord <llord@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/22 12:48:17 by llord             #+#    #+#              #
#    Updated: 2023/03/28 13:37:48 by llord            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#------------------------------------------------------------------------------#
#                                   COLOURS                                    #
#------------------------------------------------------------------------------#

DEF_COLOR	=\033[0;39m
NC			=\033[0;39m
MAGENTA		=\033[1;95m
LMAGENTA	=\033[1;95m
RED			=\033[1;91m
LRED		=\033[1;91m
YELLOW		=\033[1;93m
LYELLOW		=\033[1;93m
GREEN		=\033[1;92m
LGREEN		=\033[1;92m
CYAN		=\033[1;96m
LCYAN		=\033[1;96m
BLUE		=\033[1;94m
GRAY		=\033[1;90m
WHITE		=\033[1;97m

# RED		: Deletion done (major)
# MAGENTA	: Deletion done (minor)

# YELLOW	: Task started
# GREEN		: Task done

# CYAN		: Creation done
# BLUE		: Installation done

#------------------------------------------------------------------------------#
#                                   GENERICS                                   #
#------------------------------------------------------------------------------#

# Special variables
DEFAULT_GOAL: all
.DELETE_ON_ERROR: $(NAME)
.PHONY: all re \
		clean clear \
		fclean fclear \
		norm \


#------------------------------------------------------------------------------#
#                                    FLAGS                                     #
#------------------------------------------------------------------------------#

CFLAGS	=	-Wall -Werror -Wextra $(XFLAGS)

# Comment the line bellow to have verbose cmds:
HIDE	=	@

# Extra flags
# Use "export XFLAGS= {flags} " to add extra compilation flags
# Potential flags to use :
# -g					for debug mode
# -fsanitize=thread		to see race conditions

#------------------------------------------------------------------------------#
#                                  VARIABLES                                   #
#------------------------------------------------------------------------------#

# Compiler, flags and shortcuts
CC			=	gcc
CFLAGS		=	-Wall -Werror -Wextra -I
RM			=	rm -f
AR			=	ar rc

# Executable name
NAME		=	libft.a

# Directory names
SRCS_DIR 	=	./
OBJS_DIR	=	obj/

# Source file names (prefix their subdir if needed)
FTFD_DIR	=	ft_fd/
FTFD		=	ft_putchar_fd ft_putendl_fd ft_putnbr_fd ft_putstr_fd

FTIS_DIR	=	ft_is/
FTIS		=	ft_isalnum ft_isalpha ft_isascii ft_isdigit ft_isprint

FTLST_DIR	=	ft_lst/
FTLST		=	ft_lstadd_back ft_lstadd_front ft_lstclear ft_lstdelone \
				ft_lstiter ft_lstlast ft_lstmap ft_lstnew ft_lstsize

FTMEM_DIR	=	ft_mem/
FTMEM		=	ft_bzero ft_calloc ft_memchr ft_memcmp ft_memcpy ft_memmove ft_memset

FTPUT_DIR	=	ft_put/
FTPUT		=	ft_putbase ft_putnbr ft_putstr

FTSTR_DIR	=	ft_str/
FTSTR		=	ft_split ft_strchr ft_strdup ft_striteri ft_strjoin \
				ft_strlcat ft_strlcpy ft_strlen ft_strmapi ft_strncmp \
				ft_strnstr ft_strrchr ft_strtrim ft_substr

FTTO_DIR	=	ft_to/
FTTO		=	ft_atoi ft_itoa ft_tolower ft_toupper

SRC_FILES+=$(addprefix $(FTFD_DIR),$(FTFD))
SRC_FILES+=$(addprefix $(FTIS_DIR),$(FTIS))
SRC_FILES+=$(addprefix $(FTLST_DIR),$(FTLST))
SRC_FILES+=$(addprefix $(FTMEM_DIR),$(FTMEM))
SRC_FILES+=$(addprefix $(FTPUT_DIR),$(FTPUT))
SRC_FILES+=$(addprefix $(FTSTR_DIR),$(FTSTR))
SRC_FILES+=$(addprefix $(FTTO_DIR),$(FTTO))

SRCS 		= 	$(addprefix $(SRCS_DIR), $(addsuffix .c, $(SRC_FILES)))
OBJS 		= 	$(addprefix $(OBJS_DIR), $(addsuffix .o, $(SRC_FILES)))


#------------------------------------------------------------------------------#
#                                 BASE TARGETS                                 #
#------------------------------------------------------------------------------#

OBJSF	=	.cache_exists

all:$(NAME)

$(NAME): $(OBJS)
	@$(AR) $(NAME) $(OBJS)
	@echo "$(GREEN)Libft compiled!$(DEF_COLOR)"

$(OBJS_DIR)%.o : $(SRCS_DIR)%.c | $(OBJSF)
	@echo "$(YELLOW)Compiling: $< $(DEF_COLOR)"
	@$(CC) $(CFLAGS) $(SRCS_DIR) -c $< -o $@

$(OBJSF):
	@mkdir -p $(OBJS_DIR)
	@mkdir -p $(OBJS_DIR)$(FTFD_DIR)
	@mkdir -p $(OBJS_DIR)$(FTIS_DIR)
	@mkdir -p $(OBJS_DIR)$(FTLST_DIR)
	@mkdir -p $(OBJS_DIR)$(FTMEM_DIR)
	@mkdir -p $(OBJS_DIR)$(FTPUT_DIR)
	@mkdir -p $(OBJS_DIR)$(FTSTR_DIR)
	@mkdir -p $(OBJS_DIR)$(FTTO_DIR)

#------------------------------------------------------------------------------#
#                               CLEANING TARGETS                               #
#------------------------------------------------------------------------------#

clear: clean
clean:
	@$(RM) -rf $(OBJS_DIR)
	@$(RM) -f $(OBJSF)
	@echo "$(MAGENTA)libft object files cleaned$(DEF_COLOR)"

fclear: fclean
fclean:	clean
	@$(RM) -f $(NAME)
	@echo "$(RED)libft.a cleaned$(DEF_COLOR)"

re:	fclean all

#------------------------------------------------------------------------------#
#                               SHORTCUT TARGETS                               #
#------------------------------------------------------------------------------#

norm:
	norm:
	@norminette $(SRCS) | grep Error:
	@norminette ./libft.h | grep Error:
