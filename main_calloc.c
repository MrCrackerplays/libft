/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_calloc.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: pdruart <pdruart@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/07 17:28:04 by pdruart       #+#    #+#                 */
/*   Updated: 2020/11/07 19:13:20 by pdruart       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "unistd.h"
#include "string.h"
#include "stdlib.h"

int		main(void)
{
	char	*a;
	char	*b;
	int		i;

	a = ft_calloc(3, 4);
	b = calloc(3, 4);
	i = 0;
	while (i < (3 * 4))
	{
		if (a[i] != '\0')
			write(1, "not zero", 8);
		if (a[i] != b[i])
			write(1, "not the same\n", 13);
		else
			write(1, "are the same\n", 13);
		i++;
	}
}