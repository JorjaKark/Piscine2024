/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 18:23:10 by mafferre          #+#    #+#             */
/*   Updated: 2024/01/11 20:29:47 by mafferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	u1;
	int	d1;
	int	u2;
	int	d2;

	d1 = '0';
	d2 = '0';
	while (d2 <= '9')
	{
		u2 = '0';
		while (u2 <= '9')
		{
			d1 = '0';
			while (d1 <= '9')
			{
				u1 = '0';
					while (u1 <= '9')
					{ 	
						if (u1 != u2 && d1 != d2 && ( (d1 > d2) || (d1 == d2 &&  u1 > u2)))
						{
							ft_putchar(d2);
							ft_putchar(u2);
							ft_putchar(' ');
							ft_putchar(d1);
							ft_putchar(u1);
						
							if (!(u1 == '8' && u2 == '9' && d1 == '9' && d2 == '8'))
							{
								ft_putchar(',');
								ft_putchar(' ');
							}
						}
						u1 = u1 + 1;
			
					}
		
				d1 = d1 + 1;	
			}

			u2 = u2 + 1;
		}

		d2 = d2 + 1;
	}
}

int	main(void)
{
	ft_print_comb2();
	return 0;

}
