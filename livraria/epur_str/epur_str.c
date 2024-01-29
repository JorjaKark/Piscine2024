/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 06:38:45 by mafferre          #+#    #+#             */
/*   Updated: 2024/01/29 07:14:50 by mafferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "\n", 1);
		return 0;
	}
	int	i;
	int	flag;
	int	j;

	flag = 1;
	i = 0;
	j = 0;
	while (argv[1][i])
	{
		if (argv[1][i] == 9 || argv[1][i] == 32)
		{
			if (flag == 0)
			{	
				j = i;
				while(argv[1][j + 1])
				{	
					j = j + 1;
					if (argv[1][j] == 9 || argv[1][j] == 32)
						j++;
					else
					{
						write(1, &argv[1][i], 1);
						break;
					}
				}
			}
			flag = 1;
		}
		else
		{
			write(1, &argv[1][i], 1);
			flag = 0;
		}
		i++;
	}
	write(1, "\n", 1);
	return 0;
}
