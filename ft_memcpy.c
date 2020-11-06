/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pdruart <pdruart@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/04 16:26:07 by pdruart       #+#    #+#                 */
/*   Updated: 2020/11/06 14:59:33 by pdruart       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
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
