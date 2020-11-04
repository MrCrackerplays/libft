/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pdruart <pdruart@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/04 16:26:07 by pdruart       #+#    #+#                 */
/*   Updated: 2020/11/04 17:19:45 by pdruart       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char	*l;
	char	*r;
	size_t	i;

	l = (char *)dst;
	r = (char *)src;
	i = 0;
	while (i < n)
	{
		l[i] = r[i];
		i++;
	}
	return (dst);
}
