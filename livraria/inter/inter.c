/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mafferre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 05:49:22 by mafferre          #+#    #+#             */
/*   Updated: 2024/01/29 06:31:06 by mafferre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	str_len(char *s)
{
	int	i;

	i = 0;
	while(s[i])
		i++;
	return i;
}

int	is_in(char c, char* s)
{
	int	i;
	
	i = 0;
	while(s[i])
	{
		if (s[i] == c)
			return 1;
		i++;
	}
	return 0;
}
char	*no_double(char* s)
{
	int	i = 0;
	int	j = 0;

	char *new = (char *)malloc((str_len(s) + 1) * sizeof(char));	
	while (s[i])
	{
		if (is_in(s[i], new) == 0)
		{
			new[j] = s[i];
			j++;
		}
		i++;
	}
	new[j] = '\0';
	return (new);
}
int	main(int argc, char **argv)
{	
	if (argc != 3)
	{
		write(1, "\n", 1);
		return 0;
	}

	int	i;

	i = 0;
	char    *new = no_double(argv[1]);
	while(new[i])
	{
		if (is_in(new[i], argv[2]))
			write(1, &new[i], 1);
		i++;
	}
	free(new);
	write(1, "\n", 1);
	return 0;
}
