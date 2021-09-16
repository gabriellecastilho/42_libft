#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	int	i;
	int	len;
	int	div;
	int	nb;

	nb = n;
	len = 1;
	div = 1;
	str = "-2147483648";
	if (n == -2147483648)
		return (str);
	while(nb > 10 || nb < -10)
	{
		nb = nb/10;
		len++;
		div = div*10;
	}
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (malloc(0));
	i = 0;
	if(n < 0)
	{
		n = -n;
		str[i] = '-';
		i++;
	}
	while (div > 0)
	{
		str[i] = (n / div) + '0';
		n = (n % div);
		i++;
		div = div/10;
	}
	str[i] = '\0';
	return (str);
}
