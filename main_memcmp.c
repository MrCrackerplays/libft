/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_memcmp.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: pdruart <pdruart@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/07 16:43:46 by pdruart       #+#    #+#                 */
/*   Updated: 2020/11/07 16:55:32 by pdruart       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "unistd.h"
#include "string.h"

int		main(void)
{
	char	*a;
	char	*b;
	char	w;
	int		c;
	int		d;

	a = "äpÖPஇeL16!#!$S";
	b = "äpÖPஇeL16!#!$S";
	c = ft_memcmp(a, b, 18);
	d = memcmp(a, b, 18);
	w = '0' + c;
	write(1, &w, 1);
	if (c != d)
		write(1, "not the same\n", 13);
	else
		write(1, "are the same\n", 13);
}
