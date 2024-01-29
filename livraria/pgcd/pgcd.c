/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 01:10:32 by mafferre          #+#    #+#             */
/*   Updated: 2024/01/29 03:07:53 by mafferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//atoi
//putnbr
//isprime
#include <unistd.h>

void    putnbr(int nb)
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

int     ft_atoi(char *str)
{
        int     i;
        int     sign;
        int     new;

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
	else if (str[i] == '+')
        	i++;
        while (str[i] >= 48 && str[i] <= 57)
        {
                new = new * 10 + (str[i] - 48);
                i++;
        }
        return new * sign;
}

int	pgcd(int n1, int n2)
{
	if(n2 == 0)
		return n1;
	return pgcd(n2, n1 % n2);
}
int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		write(1, "\n", 1);
		return 0;
	}
	int x = ft_atoi(argv[1]);
	int y = ft_atoi(argv[2]);

	putnbr(pgcd(x, y));
	write(1, "\n", 1);
	return 0;
}
