
#include <stdlib.h>
#include "list.h"

extern t_list	*ponteiros;

void	gc_init(void)
{
	ponteiros = NULL;
}
