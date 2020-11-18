/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main_strncmp.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: pdruart <pdruart@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/26 16:06:25 by pdruart       #+#    #+#                 */
/*   Updated: 2020/11/18 13:59:18 by pdruart       ########   odam.nl         */
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

	word = "test";
	word1 = "testss";
	amount = 30;
	c = ft_strncmp(word, word1, amount);
	d = strncmp(word, word1, amount);
	if (d != c)
		write(1, "not the same\n", 13);
	else
		write(1, "are the same\n", 13);
}
