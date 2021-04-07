
#include <stdio.h>
#include "gc.h"
#include "libftgc.h"

t_list	*ponteiros;

//int	main_gc(int argc, char **argv, char **envp);
int	main(int argc, char **argv, char **envp)
{
	char *str;

	gc_init();
	str = (char *)ft_malloc(200);
	str = (char *)ft_malloc(200);
	str = (char *)ft_malloc(200);
	str = (char *)ft_malloc(200);
	str = (char *)ft_malloc(200);
	str = (char *)ft_malloc(200);
	str = (char *)ft_malloc(200);
	str = (char *)ft_malloc(200);
	printf("str = %s\n", ft_strdup("asdfj"));
	printf("str = %s\n", ft_strdup(ft_strdup(ft_strdup("asdfj"))));
	printf("str = %s\n", ft_strjoin("aksdhf", "asdkjfhsajdf"));
	printf("str = %s\n", ft_strjoin("aksdhf", "asdkjfhsajdf"));
	printf("str = %s\n", ft_strjoin("aksdhf", "asdkjfhsajdf"));
	printf("str = %s\n", ft_strjoin("aksdhf", "asdkjfhsajdf"));
	printf("str = %s\n", ft_strjoin("aksdhf", "asdkjfhsajdf"));
	printf("str = %s\n", ft_strjoin("aksdhf", "asdkjfhsajdf"));
	printf("str = %s\n", ft_strdup("asdfj"));
	gc_end();
	return (0);
}
