/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pdruart <pdruart@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/07 16:43:33 by pdruart       #+#    #+#                 */
/*   Updated: 2020/11/07 16:50:42 by pdruart       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*chrs1;
	char	*chrs2;
	size_t	i;

	chrs1 = (char *)s1;
	chrs2 = (char *)s2;
	i = 0;
	while (i < n)
	{
		if (*chrs1 != *chrs2)
		{
			return (*chrs1 - *chrs2);
		}
		i++;
		chrs1++;
		chrs2++;
	}
	return (0);
}
