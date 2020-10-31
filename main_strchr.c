/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_strchr.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: pdruart <pdruart@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 16:06:25 by pdruart       #+#    #+#                 */
/*   Updated: 2020/10/31 16:47:46 by pdruart       ########   odam.nl         */
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

	word = "äpSeÖPஇeL16!#!$eS";
	to_find = 'e';
	c = ft_strchr(word, to_find);
	d = strchr(word, to_find);
	if (c != d)
		write(1, "not the same\n", 13);
	else
		write(1, "are the same\n", 13);
}
