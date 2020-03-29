#include <stdlib.h>

char	*ft_itoa_base(long nb, int base)
{
	int		minus;
	char	*str;
	size_t	tmp;
	size_t	i;

	tmp = (nb < 0) ? -(size_t)nb : nb;
	minus = (nb < 0) ? 1 : 0;
	i = (minus) ? 2 : 1;
	while ((tmp /= base) >= 1)
		i++;
	tmp = (nb < 0) ? -(size_t)nb : nb;
	if (!(str = malloc((i + 1) * sizeof(*str))))
		return (NULL);
	str[i] = '\0';
	while (i-- > minus)
	{
		if (tmp % base < 10)
			str[i] = tmp % base + '0';
		else
			str[i] = tmp % base + 'a' - 10;
		tmp /= base;
	}
	(minus) ? str[i] = '-' : 0;
	return (str);
}
