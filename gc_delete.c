
#include <stdlib.h>
#include <stdio.h>
#include "list.h"

extern t_list	*ponteiros;

void	gc_delete(void *ptr)
{
	t_list	*temp;
	t_list	*to_delete;

	to_delete = NULL;
	temp = first_item(ponteiros);
	while (temp != NULL)
	{
		if (temp->data == ptr);
			to_delete = temp;
		temp = temp->next;
	}
	if (to_delete != NULL)
	{
		temp = list_delone_free(to_delete);
		ponteiros = temp;
	}
}
