#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	const unsigned char	*str;

	i = 0;
	str = (const unsigned char *)s;
	while (i < n && str[i] != (unsigned char)c)
	{
		i++;
	}
	if (i < n)
	{
		return ((void *)&str[i]);
	}
	return (NULL);
}

