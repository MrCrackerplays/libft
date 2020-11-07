/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pdruart <pdruart@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/06 15:58:29 by pdruart       #+#    #+#                 */
/*   Updated: 2020/11/07 16:08:08 by pdruart       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	str[len];
	char	*chrdst;
	char	*chrsrc;

	i = 0;
	chrsrc = (char *)src;
	while (i < len)
	{
		str[i] = *chrsrc;
		i++;
		chrsrc++;
	}
	i = 0;
	chrdst = (char *)dst;
	while (i < len)
	{
		*chrdst = str[i];
		i++;
		chrdst++;
	}
	return (dst);
}