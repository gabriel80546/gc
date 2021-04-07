
#include <stdlib.h>
#include "list.h"

extern t_list	*ponteiros;

void	gc_end()
{
	clear_list_all(ponteiros);
}
