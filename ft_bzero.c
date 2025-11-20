#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)str)[i] = 0;
		i++;
	}
}
/*
#include <stdio.h>
int	main()
{
	char	str[] = "Hello, Mundo";
	printf("%s\n",str);
	ft_bzero(str, 7);
	printf("despues %s\n", str);
	return (0);
}*/