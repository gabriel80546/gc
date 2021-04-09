
#ifndef GC_LIST_H
# define GC_LIST_H

# include <stdlib.h>
# include "gc.h"

typedef struct			s_gc_list
{
    struct s_gc_list	*next;
    void				*data;
    struct s_gc_list	*prev;
}						t_gc_list;

t_gc_list	*gc_list_init(void *conteudo);
void		gc_list_add(t_gc_list *lista, void *conteudo);
t_gc_list	*gc_first_item(t_gc_list *lista);
t_gc_list	*gc_last_item(t_gc_list *lista);
t_gc_list	*gc_list_delone(t_gc_list *lista);

#endif
