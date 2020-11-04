/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_memccpy.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: pdruart <pdruart@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/04 16:46:25 by pdruart       #+#    #+#                 */
/*   Updated: 2020/11/04 18:10:36 by pdruart       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "unistd.h"
#include "string.h"

void	setuparray(char *arr)
{
	*arr = 'a';
	arr++;
	*arr = 'p';
	arr++;
	*arr = 'p';
	arr++;
	*arr = 'e';
	arr++;
	*arr = 'l';
	arr++;
	*arr = '\0';
}

int		main(void)
{
	char	a[6];
	char	b[6];
	int		i;

	setuparray(&a[0]);
	setuparray(&b[0]);
	ft_memccpy(&a, "joep", 'e', 2);
	memccpy(&b, "joep", 'e', 2);
	i = 0;
	while (i < 6)
	{
		write(1, &a[i], 1);
		if (a[i] != b[i])
			write(1, "not the same\n", 13);
		else
			write(1, "are the same\n", 13);
		i++;
	}
}
