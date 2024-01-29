//funcao auxiliar

#include <unistd.h>

void	putnbr(int nb)
{	
	if (nb == -2147483647)
	{
		write(1, "-", 1);
		write(1, "2", 1);
		putnbr(147483647);
	}
	if (nb < 10 && nb >= 0)
	{	
		nb = nb + '0';	
		write(1, &nb, 1);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	else
	{
		putnbr(nb/10);
		putnbr(nb%10);
	}
}
/*
int	main(void)
{	
	putnbr(1234);
	return 0;
}
*/
