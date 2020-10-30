/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_strlcat.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: pdruart <pdruart@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 16:06:25 by pdruart       #+#    #+#                 */
/*   Updated: 2020/10/30 12:01:20 by pdruart       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"
#include "string.h"

int	main(void)
{
	char *word;
	int c;
	int i;
	int d;
	char word1[12];
	char *word2;

//	word = "äpÖPஇeL16!#!$S";
	i = 0;
	word = "peertjes\0";
	while (word[i] != '\0' && i < 12)
	{
		word1[i] = word[i];
		i++;
	}
	word1[i] = '\0';
	word2 = "banaan";
	d = 12;
	i = 0;
	while (word1[i] != '\0' && i < 12)
	{
		write(1, &word1[i], 1);
		i++;
	}
	write(1, "\n\n", 2);
	c = strlcat(word1, word2, d);
	i = 0;
	while (word1[i] != '\0' && i < 12)
	{
		write(1, &word1[i], 1);
		i++;
	}
}
