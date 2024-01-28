/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 01:58:24 by mafferre          #+#    #+#             */
/*   Updated: 2024/01/20 19:46:12 by mafferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	lendest;
	unsigned int	i_str;
	unsigned int	lenstr;

	i_str = 0;
	lenstr = ft_strlen(src);
	lendest = ft_strlen(dest);
	size = size - lendest - 1;
	while (src[i_str] && i_str != size)
	{
		dest[lendest + i_str] = src[i_str];
		i_str++;
	}
	dest[lendest + i_str] = '\0';
	return (lendest + lenstr);
}
/*
#include <stdio.h>

int main (void)
{
	char src[] = "lana del rey";
    	char dest [] = "born to die";
    printf("%i \n", ft_strlcat(dest, src, 20));
    printf("%s \n", dest);
}
*/
