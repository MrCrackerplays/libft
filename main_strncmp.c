/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_strncmp.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: pdruart <pdruart@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 16:06:25 by pdruart       #+#    #+#                 */
/*   Updated: 2020/11/01 19:52:43 by pdruart       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "unistd.h"
#include "string.h"

int	main(void)
{
	char	*word;
	char	*word1;
	int		c;
	int		d;
	int		amount;

	word = "äpÖPஇeL16!#!$S";
	word1 = "aäpÖPஇeL16!#!$S";
	amount = 30;
	c = ft_strncmp(word, word1, amount);
	d = strncmp(word, word1, amount);
	if (d == 0)
		write(1, "1", 1);
	else if (d < 10)
		write(1, "2", 1);// 195 = 96 + 99
	else if (d == 97)// 195 = 97 + 98
		write(1, "b", 1);
	else if (d == 98)// 195 = 98 + 97
		write(1, "a", 1);
	else if (d < 100)
		write(1, "3", 1);
	else if (d < 1000)
		write(1, "4", 1);
	else if (d < 10000)
		write(1, "5", 1);
	else if (d < 100000)
		write(1, "6", 1);
	else if (d < 1000000)
		write(1, "7", 1);
	else if (d < 10000000)
		write(1, "8", 1);
	else if (d < 100000000)
		write(1, "9", 1);
	if (c > 0)
		write(1, "1", 1);
	else if (c > -10)
		write(1, "2", 1);
	else if (c > -100)
		write(1, "3", 1);
	else if (c == -158)// 97 - x = -158 -> x = 61
		write(1, "a", 1);
	else if (c == -159)// 98 - x = -159 -> x = 61
		write(1, "b", 1);
	else if (c > -10000)
		write(1, "5", 1);
	else if (c > -100000)
		write(1, "6", 1);
	else if (c > -1000000)
		write(1, "7", 1);
	else if (c > -10000000)
		write(1, "8", 1);
	else if (c > -100000000)
		write(1, "9", 1);
	if (d != c)
		write(1, "not the same\n", 13);
	else
		write(1, "are the same\n", 13);
}
