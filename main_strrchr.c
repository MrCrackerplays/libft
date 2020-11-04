/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_strrchr.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: pdruart <pdruart@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 16:06:25 by pdruart       #+#    #+#                 */
/*   Updated: 2020/11/04 12:07:56 by pdruart       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "unistd.h"
#include "string.h"

int	main(void)
{
	char *word;
	char *c;
	char *d;
	char to_find;

	word = "bonjour";
	to_find = 'b';
	c = ft_strrchr(word, to_find);
	d = strrchr(word, to_find);
	if (c != d)
		write(1, "not the same\n", 13);
	else
		write(1, "are the same\n", 13);
}
