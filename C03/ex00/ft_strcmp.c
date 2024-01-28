/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 21:49:29 by mafferre          #+#    #+#             */
/*   Updated: 2024/01/17 19:08:27 by mafferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] || s2[i]))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
#include<stdio.h>

int     main(void)
{
        char s1[] = "aaa";
        char s2[] = "ab";

        printf("%d", ft_strcmp(s1, s2));
        return(0);
}
*/
