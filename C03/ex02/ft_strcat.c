/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 18:17:44 by mafferre          #+#    #+#             */
/*   Updated: 2024/01/16 19:59:27 by mafferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	n;
	int	m;

	m = 0;
	n = 0;
	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	while (dest[n] != '\0')
	{
		n++;
	}
	while (m < i)
	{
		dest[n] = src[m];
		m++;
		n++;
	}
	dest[n] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char	dest1[] = "Hello World";
	char	src1[] = "Hello C";

	ft_strcat(dest1, src1);
	write(1, dest1, 24);
	return 0;
}
*/
