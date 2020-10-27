/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_toupper.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: pdruart <pdruart@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 16:06:25 by pdruart       #+#    #+#                 */
/*   Updated: 2020/10/27 11:07:41 by pdruart       ########   odam.nl         */
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

	word = "äpPeL16!#!$S";
	word1 = word;
	word2 = word;
	while (*word1 != '\0')
	{
		c = ft_toupper(*word1);
		d = toupper(*word2);
		write(1, &d, 1);
		if (c != d)
			write(1, "\nnot the same\n", 14);
		word1++;
		word2++;
	}
}
