/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 20:55:48 by mafferre          #+#    #+#             */
/*   Updated: 2024/01/20 15:47:51 by mafferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int		len_src;
	unsigned int		len_dest;
	unsigned int		m;

	m = 0;
	len_src = 0;
	len_dest = 0;
	while (src[len_src])
		len_src++;
	if (len_src < nb)
		nb = len_src;
	while (dest[len_dest])
		len_dest++;
	while (m < nb)
	{
		dest[len_dest] = src[m];
		m++;
		len_dest++;
	}
	dest[len_dest] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	dest1[] = "Hello World";
	char	src1[] = "Hello C";
	ft_strncat(dest1, src1, 5);
	write(1, dest1, 17);
	return (0);
}
*/
