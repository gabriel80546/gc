
#include "gc_list.h"

void	gc_list_add(t_gc_list *lista, void *conteudo)
{
	t_gc_list	*last;

	while(lista != NULL)
	{
		last = lista;
		lista = lista->next;
	}
	lista = (t_gc_list *)ft_malloc(sizeof(t_gc_list));
	lista->prev = last;
	lista->data = conteudo;
	lista->next = NULL;
	last->next = lista;
}
