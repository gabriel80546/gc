
#include "gc_list.h"

t_gc_list	*gc_list_delone_free(t_gc_list *lista)
{
	t_gc_list	*temp_list_a;
	t_gc_list	*temp_list_b;
	t_gc_list	*temp_list_c;

	temp_list_a = lista->prev;
	temp_list_b = lista->next;
	temp_list_c = lista;

	if (lista == NULL)
		return (NULL);
	if (lista->prev == NULL && lista->next == NULL)
	{
		free(lista->data);
		lista->data = NULL;
		free(lista);
		lista = NULL;
		return (NULL);
	}
	if (lista->prev != NULL)
	{
		lista = lista->prev;
		lista->next = temp_list_b;
	}
	lista = temp_list_c;
	free(lista->data);
	lista->data = NULL;
	if (lista->next != NULL)
	{
		lista = lista->next;
		lista->prev = temp_list_a;
	}
	else
		lista = lista->prev;
	free(temp_list_c);
	temp_list_c = NULL;
	return (lista);
}
