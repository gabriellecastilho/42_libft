#include "libft.h"

int	ft_get_len(int n)
{
	int	len;

	if (n >= 0)
		len = 1;
	else
		len = 2;
	while (n > 9 || n < -9)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

int	ft_get_div(int n)
{
	int	div;

	div = 1;
	while (n > 9 || n < -9)
	{
		n = n / 10;
		div = div * 10;
	}
	return (div);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		len;
	int		div;

	len = ft_get_len(n);
	div = ft_get_div(n);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (malloc(0));
	i = 0;
	if (n < 0)
	{
		n = (unsigned int) -n;
		str[i++] = '-';
	}
	while (div > 0)
	{
		str[i++] = ((unsigned int)n / div) + '0';
		n = ((unsigned int)n % div);
		div = div / 10;
	}
	str[i] = '\0';
	return (str);
}
