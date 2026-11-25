#include <stddef.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (src[j] != '\0')
	{
		j++;
	}
	while (size != 0 && i < size - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (size == 0)
	{
		return (j);
	}
	dest[i] = '\0';
	return (j);
}
