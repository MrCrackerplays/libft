/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_atoi.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pdruart <pdruart@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/04 13:16:23 by pdruart       #+#    #+#                 */
/*   Updated: 2020/11/04 13:51:46 by pdruart       ########   odam.nl         */
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

	num = "-2147483648";
	a = ft_atoi(num);
	b = atoi(num);
	if (a != b)
		write(1, "not the same\n", 13);
	else
		write(1, "are the same\n", 13);
}
