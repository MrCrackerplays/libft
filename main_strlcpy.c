/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_strlcpy.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: pdruart <pdruart@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 16:06:25 by pdruart       #+#    #+#                 */
/*   Updated: 2020/11/01 16:19:02 by pdruart       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "unistd.h"
#include "string.h"

void	printword(char *word)
{
	int		i;

	i = 0;
	while (word[i] != '\0')
	{
		write(1, &word[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int		main(void)
{
	int		c;
	int		d;
	char	word1[15];
	char	word3[15];
	char	*word2;

	word2 = "peer";
	c = -1;
	while (word2[++c] != '\0')
		word1[c] = word2[c];
	word1[c] = '\0';
	c = -1;
	while (word2[++c] != '\0')
		word3[c] = word2[c];
	word3[c] = '\0';
	word2 = "bananas";
	c = ft_strlcpy(word1, word2, 8);
	d = strlcpy(word3, word2, 8);
	if (c != d)
		write(1, "not the same\n", 13);
	else
		write(1, "are the same\n", 13);
	printword(word1);
	printword(word3);
}
