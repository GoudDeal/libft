# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dcyprien <dcyprien@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/05 15:45:42 by dcyprien          #+#    #+#              #
#    Updated: 2019/11/19 12:28:37 by dcyprien         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	ft_bzero.c		\
			ft_memccpy.c	\
			ft_memcpy.c		\
			ft_memset.c		\
			ft_strlen.c		\
			ft_isalnum.c	\
			ft_isalpha.c	\
			ft_isdigit.c	\
			ft_isprint.c	\
			ft_memchr.c		\
			ft_memcmp.c		\
			ft_memmove.c	\
			ft_isascii.c	\
			ft_toupper.c	\
			ft_tolower.c	\
			ft_strchr.c		\
			ft_strrchr.c	\
			ft_strncmp.c	\
			ft_strlcpy.c	\
			ft_strlcat.c	\
			ft_strnstr.c	\
			ft_atoi.c		\
			ft_strdup.c		\
			ft_substr.c		\
			ft_calloc.c		\
			ft_strjoin.c	\
			ft_strtrim.c	\
			ft_split.c		\
			ft_itoa.c		\
			ft_strmapi.c	\
			ft_putchar_fd.c	\
			ft_putstr_fd.c	\
			ft_putendl_fd.c	\
			ft_putnbr_fd.c	\

SRCSBONUS	=	ft_lstnew.c			\
				ft_lstadd_front.c	\
				ft_lstsize.c		\
				ft_lstadd_back.c	\
				ft_lstdelone.c		\
				ft_lstclear.c		\
				ft_lstiter.c		\
				ft_lstmap.c			\
				ft_lstlast.c

NAME	=	libft.a

CC		=	gcc

CFLAGS	=	-Wall -Wextra -Werror

OBJS	=	${SRCS:.c=.o}

OBJSBONUS	=	${SRCSBONUS:.c=.o}

CCLIB	=	ar rc

RM		=	rm -f


$(NAME):	${OBJS}
			${CCLIB} ${NAME} ${OBJS}

all:		${NAME}

clean:		
			${RM} ${OBJS} ${OBJSBONUS}

fclean:		clean
			${RM} ${NAME}

bonus:		${OBJS}
			${CC} ${CFLAGS} -c ${SRCSBONUS}
			${CCLIB} ${NAME} ${OBJS} ${OBJSBONUS}

re:			fclean all

.PHONY = all clean fclean re bonus