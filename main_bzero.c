/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_bzero.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pdruart <pdruart@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/04 13:16:23 by pdruart       #+#    #+#                 */
/*   Updated: 2020/11/04 14:42:31 by pdruart       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "unistd.h"
#include "strings.h"

int		main(void)
{
	char	str[7];
	char	st2[7];
	int		i;

	str[3] = 'u';
	st2[3] = 'u';
	i = 0;
	ft_bzero(&str, 7);
	bzero(&st2, 7);
	i = 0;
	while (i < 7)
	{
		write(1, &str[i], 1);
		if (str[i] != st2[i])
			write(1, "not the same\n", 13);
		else
			write(1, "are the same\n", 13);
		i++;
	}
}
