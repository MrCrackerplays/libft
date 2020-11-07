/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_memchr.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: pdruart <pdruart@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/07 16:07:03 by pdruart       #+#    #+#                 */
/*   Updated: 2020/11/07 16:42:08 by pdruart       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "unistd.h"
#include "string.h"

int		main(void)
{
	char	*a;
	void	*c;
	void	*d;

	a = "äpÖPஇeL16!#!$S";
	c = ft_memchr(a, 'e', 2);
	d = memchr(a, 'e', 2);
	write(1, c, 1);
	if (c != d)
		write(1, "not the same\n", 13);
	else
		write(1, "are the same\n", 13);
}
