/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pdruart <pdruart@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/06 15:58:29 by pdruart       #+#    #+#                 */
/*   Updated: 2020/11/29 13:50:23 by pdruart       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*chrdst;
	char	*chrsrc;
	int		overlap;

	if (dst == NULL && src == NULL)
		return (NULL);
	i = 0;
	overlap = (src < dst && dst <= src + len) ? 1 : 0;
	chrsrc = (char *)src;
	chrdst = (char *)dst;
	while (i < len)
	{
		if (overlap)
			chrdst[len - i - 1] = chrsrc[len - i - 1];
		else
			chrdst[i] = chrsrc[i];
		i++;
	}
	return (dst);
}
