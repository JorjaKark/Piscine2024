/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 16:20:43 by mafferre          #+#    #+#             */
/*   Updated: 2024/01/10 16:39:54 by mafferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	i;

	i = 122;
	while (i >= 97)
	{
		write(1, &i, 1);
		i--;
	}
}
/*
int	main()
{
	ft_print_reverse_alphabet();
	return 0;
}
*/
