/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 05:29:40 by mafferre          #+#    #+#             */
/*   Updated: 2024/01/29 05:44:12 by mafferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putnbr(int i)
{
	if (i < 10)
	{
		i = i + '0';
		write(1, &i, 1);
	}
	else
	{
		putnbr(i/10);
		putnbr(i%10);
	}
}

int	main(void)
{
	int	i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 != 0 && i % 5 != 0)
			putnbr(i);
		else
			if (i % 3 == 0)
			{
				if (i % 5 == 0)
					write(1, "fizzbuzz", 8);
				else
					write(1, "fizz", 4);
			}
			else
				write(1, "buzz", 4);
		write(1, "\n", 1);
		i++;
	}
	return 0;
}
