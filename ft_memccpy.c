/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memccpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pdruart <pdruart@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/04 16:26:07 by pdruart       #+#    #+#                 */
/*   Updated: 2020/11/06 15:00:37 by pdruart       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char	*l;
	char	*r;
	size_t	i;

	l = (char *)dst;
	r = (char *)src;
	i = 0;
	while (i < n)
	{
		if (r[i] == (unsigned char)c)
		{
			return (&(r[i + 1]));
		}
		l[i] = r[i];
		i++;
	}
	return (NULL);
}
