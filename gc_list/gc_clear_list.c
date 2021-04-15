
#include "gc_list.h"

void	gc_clear_list(t_gc_list *lista)
{
	t_gc_list *last;

	lista = gc_first_item(lista);
	while (lista != NULL)
	{
		last = lista;
		lista = lista->next;
		gc_delete(last);
	}
}
