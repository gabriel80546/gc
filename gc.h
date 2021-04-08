
#ifndef GC_H
# define GC_H

#include "lists/list.h"

//extern t_list	*ponteiros;
//t_list	*ponteiros;
//t_list	*ponteiros;

void	gc_end(void);
void	*ft_malloc(size_t nmemb);
void	gc_init(void);
void	gc_delete(void *ptr);

#endif
