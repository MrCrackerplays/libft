/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pdruart <pdruart@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/28 15:09:39 by pdruart       #+#    #+#                 */
/*   Updated: 2020/10/31 18:48:15 by pdruart       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	unsigned int	dstlen;

	i = 0;
	dstlen = ft_strlen(dst);
	while (i < dstsize - dstlen - 1)
	{
		dst[i + dstlen] = src[i];
		i++;
	}
	dst[i + dstlen] = src[i];
	if (dstsize != 0 && dstlen <= dstsize)
		dst[dstsize - 1] = '\0';
	return (dstlen + ft_strlen(src));
}
