/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_strdup.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: pdruart <pdruart@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/07 18:07:26 by pdruart       #+#    #+#                 */
/*   Updated: 2020/11/07 19:18:16 by pdruart       ########   odam.nl         */
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
	char	*c;
	int		i;

	c = "äpÖPஇeL16!#!$S";
	i = 0;
	a = ft_strdup(c);
	b = strdup(c);
	while (c[i] != '\0')
	{
		write(1, &a[i], 1);
		if (a[i] != b[i])
			write(1, "not the same\n", 13);
		else
			write(1, "are the same\n", 13);
		i++;
	}
}
