/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_strnstr.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: pdruart <pdruart@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 16:06:25 by pdruart       #+#    #+#                 */
/*   Updated: 2020/11/01 17:26:10 by pdruart       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "unistd.h"
#include "string.h"

int	main(void)
{
	char	*word;
	char	*word1;
	char	*word2;
	char	*sub;
	int		amount;

	word = "äpÖPஇeL16!#!$S";
	sub = "q";
	amount = 50;
	word1 = word;
	word2 = word;
	word1 = ft_strnstr(word, sub, amount);
	word2 = strnstr(word, sub, amount);
	if (word1 != word2)
		write(1, "not the same\n", 13);
	else
		write(1, "are the same\n", 13);
}
