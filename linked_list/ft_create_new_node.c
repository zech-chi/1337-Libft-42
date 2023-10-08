#include "myLinkedListLib.h"

t_list *ft_create_new_node(void *content)
{
    t_list *new_node = malloc(sizeof(t_list));
    new_node->content = content;
    new_node->next = NULL;
    printf("fuck\n");
    return (new_node);
}