/* ************************************************************************** */
/*                                                                            */
/*                                                         :::      ::::::::  */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 12:19:39 by mafferre          #+#    #+#             */
/*   Updated: 2024/01/11 17:58:45 by mafferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	b = a + 1;
	c = b + 1;
	while (a <= 7 & b <= 8 & c <= 9)
	{
		ft_putchar(a + '0');
		ft_putchar(b + '0');
		ft_putchar(c + '0');
		if (!(a == 7 && b == 8 && c == 9))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
		c++;
		c = 0;
		b++;
		b = a + 1;
		a++;
	}
}
/*
int	main(void)
{
	ft_print_comb();
	return 0;
}
*/
