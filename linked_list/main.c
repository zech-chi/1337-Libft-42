#include "myLinkedListLib.h"

int main()
{
    char *data1 = strdup("hello");
    char *data2 = strdup("world");
    t_list *node1 = ft_create_new_node(data1);
    t_list *node2 = ft_create_new_node(data2);

    node1->next = node2;

    printf("%s\n", (char *)node1->content);
    printf("%s\n", (char *)node1->next->content);
    return (0);
}