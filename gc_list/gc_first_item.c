
#include "gc_list.h"

t_gc_list	*gc_first_item(t_gc_list *lista)
{
	t_gc_list *temp_list;

	if (lista == NULL)
		return (NULL);
	while (lista != NULL)
	{
		temp_list = lista;
		lista = lista->prev;
	}
	return (temp_list);
}
