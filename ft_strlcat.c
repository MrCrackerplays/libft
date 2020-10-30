/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pdruart <pdruart@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/28 15:09:39 by pdruart       #+#    #+#                 */
/*   Updated: 2020/10/30 12:01:47 by pdruart       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int	i;
// not done yet, don't forget
	i = 0;
	while (dst[i] != '\0')
	{
		
		i++;
	}
	dst[i-1] = '\0';
	return (dst);
}