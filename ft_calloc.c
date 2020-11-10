/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pdruart <pdruart@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/07 17:00:45 by pdruart       #+#    #+#                 */
/*   Updated: 2020/11/09 16:36:43 by pdruart       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "errno.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = malloc(count * size);
	if (ptr == NULL)
	{
		errno = ENOMEM;
		return (NULL);
	}
	while (i < count * size)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
