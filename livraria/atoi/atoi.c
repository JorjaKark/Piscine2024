//funcao auxiliar

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	new;
	
	new = 0;
	sign = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-')
	{	
		sign *= -1;
		i++;
	}
	else if(str[i] == '+')
		i++;
	while (str[i] >= 48 && str[i] <= 57)
	{
		new = new * 10 + (str[i] - 48);
		i++;
	}
	return new * sign;
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_atoi("   -123jj23"));
	return 0;
}
*/
