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

int main(void)
{
	char *input = "11111111";
	int power = 0;
	int result = 0;
	int i = 0;

	power = ft_strlen(input) - 1;
	while (input[i])
	{
		if (input[i++] == '1')
			result += ft_pow(2, power);
		power--; 
	}
	printf("%d\n", result);
	return (0);
}
