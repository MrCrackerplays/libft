/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_atoi.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pdruart <pdruart@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/04 13:16:23 by pdruart       #+#    #+#                 */
/*   Updated: 2020/11/18 13:09:07 by pdruart       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "unistd.h"
#include "stdlib.h"

int		main(void)
{
	int		a;
	int		b;
	char	*num;

	num = "-4886";
	a = ft_atoi(num);
	b = atoi(num);
	if (a != b)
		write(1, "not the same\n", 13);
	else
		write(1, "are the same\n", 13);
}
