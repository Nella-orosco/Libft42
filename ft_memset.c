#include "libft.h"

void	*ft_memset(void *a, int c, size_t n)
{
	unsigned char	*s;
	size_t			i;

	i = 0;
	s = a;
	while (i < n)
	{
		s[i] = (unsigned char)c;
		i++;
	}
	return (a);
}
/*
#include <stdio.h>

int	main(void)
{
	char	array[10];
	int		i;

	i = 0;
	ft_memset(array, 'A', 10);
	while (i < 10)
	{
		printf("%c", array[i]);
		i++;
	}
	printf("\n");
	return (0);
}*/