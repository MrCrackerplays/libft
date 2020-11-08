/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_memset.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: pdruart <pdruart@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/07 18:07:26 by pdruart       #+#    #+#                 */
/*   Updated: 2020/11/08 15:28:09 by pdruart       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "unistd.h"
#include "string.h"

int		main(void)
{
	char	a[5];
	char	b[5];
	int		c;
	int		i;

	c = '4';
	i = 0;
	ft_memset(&a[0], c, 5);
	memset(&b[0], c, 5);
	while (i < 5)
	{
		write(1, &a[i], 1);
		if (a[i] != b[i])
			write(1, "not the same\n", 13);
		else
			write(1, "are the same\n", 13);
		i++;
	}
}
