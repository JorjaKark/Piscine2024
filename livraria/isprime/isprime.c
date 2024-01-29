//is prime

int	isprime(int nbr)
{
	int	i;

	i = 2;
	if (nbr < 2 && nbr >= 0)
		return 0;
	else if (nbr >= 2)
	{
		while (i < nbr)
		{
			if (nbr % i == 0)
				return 0;
			i++;
		}
		return 1;
	}
	return 0;
}
/*
#include <stdio.h>
int	main(void)
{
	printf("11 - %d\n", isprime(11));
	printf("12 - %d\n", isprime(12));
	printf("0 - %d\n", isprime(0));
	printf("-3 - %d\n", isprime(-3));
	printf("2 - %d\n", isprime(2));
	printf("7 - %d\n", isprime(7));	
}
*/
