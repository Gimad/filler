cmake_minimum_required(VERSION 3.16)
project(filler C)

set(CMAKE_C_STANDARD 99)

add_executable(filler srcs/main.c
        srcs/get_next_line.c
        srcs/read_all.c
        srcs/algorithm.c
        srcs/extra.c
        includes/filler.h
        includes/get_next_line.h
        libft/libft.h
        libft/ft_abs.c
        libft/ft_bzero.c
        libft/ft_putchar.c
        libft/ft_putchar_fd.c
        libft/ft_putendl.c
        libft/ft_putnbr.c
        libft/ft_putstr.c
        libft/ft_putstr_fd.c
        libft/ft_atoi.c
        libft/ft_space.c
        libft/ft_strchr.c
        libft/ft_strdel.c
        libft/ft_strdup.c
        libft/ft_strjoin.c
        libft/ft_strcmp.c
        libft/ft_strncmp.c
        libft/ft_strnew.c
        libft/ft_memdel.c
        libft/ft_memset.c
        libft/ft_strlen.c
        libft/ft_strscroll.c
        libft/ft_strstr.c
        libft/ft_strsub.c
        libft/ft_memcmp.c)
