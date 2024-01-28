/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 02:14:26 by mafferre          #+#    #+#             */
/*   Updated: 2024/01/17 18:54:24 by mafferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 'A' && *str <= 'Z') && !(*str >= 'a' && *str <= 'z'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/*
#include <stdio.h>
int     main()
{
        char str1[] = ft_str_is_alpha("ahjkjkjkjjkjkjjkjkjkjjjjkAAAa");
	if (ft_str_is_alpha(str1))
	{
        	printf("%s contém apenas letras.\n", str1);
	}
        return 0;

}
*/
