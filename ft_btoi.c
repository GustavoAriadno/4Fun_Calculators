#include <stdio.h>

int	ft_strlen(char *string)
{
	int i = 0;
	while (string[i])
		i++;
	return (i);
}

int ft_pow(int base, int power)
{
	int x = base;

	if (power == 0)
		return (1);
	else if (power == 1)
		return (base);
	while (power-- > 1)
		x *= base;
	return (x);
}

int ft_btoi(char *str)
{
	int result = 0;
	int pow = 0;
	int i = 0;

	pow = ft_strlen(str) - 1;
	while (str[i])
	{
		if (str[i++] == '1')
			result += ft_pow(2, pow);
		pow--; 
	}
	return (result);
}
