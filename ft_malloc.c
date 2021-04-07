
//#include "gc.h"
#include <stdlib.h>
#include "list.h"

extern t_list	*ponteiros;

void	*ft_malloc(size_t nmemb)
{
	void *saida;

	saida = malloc(nmemb);
	if (saida == NULL)
		return (NULL);
	if (ponteiros == NULL)
		ponteiros = list_init(saida);
	else
		list_add(ponteiros, saida);
	return (saida);
}
