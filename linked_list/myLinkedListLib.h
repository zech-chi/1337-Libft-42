#ifndef MYLINKEDLISTLIB_H
#define MYLINKEDLISTLIB_H
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct s_list
{
    void *content;
    struct s_list *next;
} t_list;

t_list *ft_create_new_node(void *content);

#endif