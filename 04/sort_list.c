#include "list.h"
#include <stdlib.h>
#include <stdio.h>

int ascending(int a, int b)
{
	return (a <= b);
}

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
    t_list *res;
    int swap = 0;

    res = lst;
    while (lst->next != NULL)
    {
        if(!(*cmp)(lst->data, lst->next->data))
        {
            swap = lst->data;
            lst->data = lst->next->data;
            lst->next->data = swap;
            lst = res;
        }
        else
            lst = lst->next;
    }
    lst = res;
    return(lst);
}

int		main(void)
{
	t_list *l;
	int		i;
	t_list	*t;
	t_list	*b;

	i = 50;
	l = malloc(sizeof(t_list));
	t = l;
	b = l;
	while (i)
	{
		l->data = i % 3;
		l->next = malloc(sizeof(t_list));
		l = l->next;
		--i;
	}
	l->data = (int)"fromage";
	l->next = NULL;
	while (t)
	{
		printf("%d ", t->data);
		t = t->next;
		++i;
	}
	b = sort_list(b, ascending);
	while (b)
	{
		printf("%d ", b->data);
		b = b->next;
		++i;
	}
}