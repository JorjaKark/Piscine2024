/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 19:49:03 by mafferre          #+#    #+#             */
/*   Updated: 2024/01/17 20:09:02 by mafferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	acc;

	acc = 0;
	while (*str)
	{
		acc++;
		str++;
	}
	return (acc);
}

/*
#include <stdio.h>

int main(void)
{
    char m[] = "Hello, World";
    int length = ft_strlen(m);
    printf("%d\n", length);
    return 0;
}
*/
