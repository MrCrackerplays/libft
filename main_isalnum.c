/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_isalnum.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: pdruart <pdruart@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 16:06:25 by pdruart       #+#    #+#                 */
/*   Updated: 2020/10/27 15:07:44 by pdruart       ########   odam.nl         */
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
		c = '0' + ft_isalnum(*word1);
		d = '0' + isalnum(*word2);
		write(1, &d, 1);
		if (c != d)
			write(1, "\nnot the same\n", 14);
		word1++;
		word2++;
	}
}
