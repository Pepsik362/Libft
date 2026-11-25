#include <stddef.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	l;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
		j++;
	l = j;
	if (size > j)
	{
		while (src[i] != '\0' && j < size - 1)
		{
			dest[j] = src[i];
			i++;
			j++;
		}
		dest[j] = '\0';
	}
	while (src[i] != '\0')
		i++;
	if (size < l)
		return (size + i);
	return (l + i);
}
