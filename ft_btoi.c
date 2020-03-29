#include <stdlib.h>

size_t	ft_strlen(char *string)
{
	int i = 0;
	while (string[i])
		i++;
	return (i);
}

size_t	ft_pow(int base, int pow)
{
	int x = base;

	if (pow == 0)
		return (1);
	else if (pow == 1)
		return (base);
	while (pow-- > 1)
		x *= base;
	return (x);
}

size_t	ft_btoi(char *str)
{
	size_t	result = 0;
	size_t	pow = 0;
	size_t	i = 0;

	pow = ft_strlen(str) - 1;
	while (str[i])
	{
		if (str[i++] == '1')
			result += ft_pow(2, pow);
		(str[i] == '0') ? pow-- : 0; 
	}
	return (result);
}
