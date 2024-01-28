/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:50:05 by mafferre          #+#    #+#             */
/*   Updated: 2024/01/18 12:40:28 by mafferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	flag;

	i = 0;
	flag = 1;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= '0' && str[i] <= '9')
			|| (str[i] >= 'A' && str[i] <= 'Z'))
		{
			if (flag == 1 && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] -= 32;
			else if (flag != 1 && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] += 32;
			flag = 0;
		}
		else
		{
			flag = 1;
		}
		i++;
	}
	return (str);
}

/*
#include <stdio.h>
int	main()
{
	char str[] = "ooi!! mas keep ++ evolucao..aLEluia o c0digo @deu certo!!" ;
	printf("%s", ft_strcapitalize(str));
}
*/
