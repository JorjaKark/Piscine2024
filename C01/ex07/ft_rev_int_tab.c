/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 18:43:58 by mafferre          #+#    #+#             */
/*   Updated: 2024/01/17 20:16:25 by mafferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	newsize;

	newsize = size - 1;
	i = 0;
	while (i < newsize)
	{
		temp = tab[i];
		tab[i] = tab[newsize];
		tab[newsize] = temp;
		i++;
		newsize--;
	}
}
/*
#include <stdio.h>

int main(void)
{
    int m[] = {1, 2, 3, 4, 5};
    int size = sizeof(m) / sizeof(int);

    ft_rev_int_tab(m, size);

    for (int i = 0; i < size; i++)
    {
        printf("%d ", m[i]);
    }

    return 0;
}
*/
