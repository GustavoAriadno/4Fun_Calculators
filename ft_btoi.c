#include <stdlib.h>

size_t	check_valid(char *str)
{
	int	valid;
	int	i;
	
	valid = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '0' || str[i] == '1')
			valid++;
		i++;
	}
	return (valid);
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

	pow = check_valid(str) - 1;
	while (str[i])
	{
		if (str[i] == '1')
			result += ft_pow(2, pow);
		if (str[i] == '1' || str[i] == '0')
			pow--; 
		i++;
	}
	return (result);
}
