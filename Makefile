NAME		=	lem-in

CC			=	gcc 
CFLAGS		=	-Wall -Werror -Wextra -g
_LI_SRCS	= 	li_00_lem_in.c \
			  	li_01_parse_tools.c \
			  	li_01bis_parse_tools.c \
			  	li_01ter_parse_tools.c \
			  	li_02_begin.c \
			  	li_03_algo.c \
				li_05_dispatch.c \
				li_05bis_dispatch_and_algo.c \
				li_06_tab_path_tools.c \
			  	li_09a_free_and_error.c \
			  	li_09bis_free_and_error.c \
			  	li_09b_search_and_init_tools.c \
			  	li_09c_matrice_tools.c \
			  	li_09d_path_tools.c \
			  	li_09e_bonus.c \
			  	li_09f_bonus2.c
			
_LIBFT		=	libft.a

SRCS_DIR	=	sources
INCLUDES 	=	includes
LIB_DIR		=	libft
LI_SRCS		=	$(addprefix $(SRCS_DIR)/, $(_LI_SRCS))
LIBFT		=	$(addprefix $(LIB_DIR), $(_LIBFT))

LI_OBJS		=	$(LI_SRCS:.c=.o)

all:	$(NAME)

$(NAME) : $(LIBFT) $(LI_OBJS)
	@$(CC) $(CFLAGS) -o $(NAME) $(LI_OBJS) -L$(LIB_DIR) -lft
	@echo "$(NAME) : $(_GREEN)Done$(_END)"

$(LIBFT):
	@make -C $(LIB_DIR)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@ -I includes/

clean:
	@make fclean -C $(LIB_DIR)
	@/bin/rm -f $(LI_OBJS)
	@echo "lem_in clean : $(_GREEN)Done$(_END)"

fclean: clean
	@/bin/rm -f $(NAME)
	@echo "lem_in fclean : $(_GREEN)Done$(_END)"

re:
	@make fclean
	@make

.PHONY: all clean fclean re
