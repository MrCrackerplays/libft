/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_isprint.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: pdruart <pdruart@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 16:06:25 by pdruart       #+#    #+#                 */
/*   Updated: 2020/11/01 17:31:17 by pdruart       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "unistd.h"
#include "ctype.h"

int	main(void)
{
	char *word;
	char c;
	char d;
	char *word1;
	char *word2;

	word = "äpÖPஇeL16!#!$S";
	word1 = word;
	word2 = word;
	while (*word1 != '\0')
	{
		c = '0' + ft_isprint(*word1);
		d = '0' + isprint(*word2);
		write(1, &d, 1);
		if (c != d)
			write(1, "\nnot the same\n", 14);
		word1++;
		word2++;
	}
}
