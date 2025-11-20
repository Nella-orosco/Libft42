#include "libft.h"

void	*ft_memmove(void *dest, const void *origen, size_t len)
{
	unsigned char	*src;
	unsigned char	*des;

	if (origen == NULL && dest == NULL)
		return (NULL);
	src = (unsigned char *)origen;
	des = (unsigned char *)dest;
	if (des >= src)
	{
		while (len--)
			des[len] = src[len];
	}
	else
		ft_memcpy(des, src, len);
	return (des);
}
/*
#include <stdio.h>
int	main()
{
	int	fuente[] = {1, 2, 3, 4, 5};
	int	destino[5];
	ft_memmove(destino, fuente, sizeof(fuente));
	int	i = 0;
	while (i < 5)
	{
		printf("%d\n", destino[i]);
		i++;
	}
	return (0);
}*/