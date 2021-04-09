
#include "gc_list.h"

t_gc_list	*gc_list_init(void	*conteudo)
{
	t_gc_list *saida;

	if (conteudo == NULL)
		return (NULL);
	saida = (t_gc_list *)ft_malloc(sizeof(t_gc_list));
	saida->prev = NULL;
	saida->data = conteudo;
	saida->next = NULL;
	return (saida);
}
