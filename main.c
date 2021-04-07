
#include <stdio.h>
#include "gc.h"
#include "libftgc.h"

t_list	*ponteiros;

int	main_gc(int argc, char **argv, char **envp);
int	main(int argc, char **argv, char **envp)
{
	int saida;
	gc_init();
	saida = main_gc(argc, argv, envp);
	gc_end();
	return (saida);
}

int	main_gc(int argc, char **argv, char **envp)
{
	printf("str = %s\n", ft_strdup("asdfj"));
	printf("str = %s\n", ft_strdup("asdfj"));
	printf("str = %s\n", ft_strdup("asdfj"));
	printf("str = %s\n", ft_strdup("asdfj"));
	return (0);
}
