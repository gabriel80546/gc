
#include <stdio.h>
#include "gc.h"
#include "libftgc.h"

t_list	*ponteiros;

void	teste(void);
void	fun(void);
int	main(int argc, char **argv, char **envp)
{
	char *str;

	gc_init();
	teste();

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
	printf("str = %s\n", ft_strjoin(ft_strjoin("aksdhf", "asdkjfhsajdf"), "asdkjfhsajdf"));
	printf("str = %s\n", ft_strjoin("aksdhf", ft_strjoin("aksdhf", "asdkjfhsajdf")));
	printf("str = %s\n", ft_strjoin("aksdhf", "asdkjfhsajdf"));
	printf("str = %s\n", ft_strdup("asdfj"));
	gc_end();
	return (0);
}

void fun(void)
{
	char	*to_delete;

	to_delete = ft_strdup("to_delete\n");
	gc_delete(to_delete);
	gc_delete(to_delete);
	gc_delete(to_delete);
	gc_delete(to_delete);
}

void save(void)
{
	char *minha_string;
	int len;
	int i;

	minha_string = ft_strdup("teste");
	printf("minha_string = '%s'\n", minha_string);
	len = ft_strlen(minha_string);
	i = 0;
	while (++i < len)
		printf("ft_substr(minha_string, 0, %i) = '%s'\n", i, ft_substr(minha_string, 0, i));
	fun();
}

void split_test(char *fim)
{
	char	**strings;
	int		i;

	strings = ft_split(fim, ' ');
	i = 0;

	while (strings[++i] != NULL)
		printf("strings[%i] = '%s'\n", i, strings[i]);
	save();
}

void	teste(void)
{
	char	*fim;
	int		i;

	i = 0;
	fim = ft_strdup("");
	while (i < 100)
	{
		fim = ft_strjoin(fim, "a, ");
		i++;
	}
	printf("fim = %s\n", fim);
	split_test(fim);
}

