
#include <stdio.h>
#include "gc.h"
#include "libftgc.h"

t_list	*ponteiros;

void	teste(void);
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

void save(void)
{
	printf("excuse\n");
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

