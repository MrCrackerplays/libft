/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pdruart <pdruart@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/04 16:26:07 by pdruart       #+#    #+#                 */
/*   Updated: 2020/11/08 17:16:08 by pdruart       ########   odam.nl         */
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
		if (dst == NULL && src == NULL)
			return (NULL);
		l[i] = r[i];
		i++;
	}
	return (dst);
}
