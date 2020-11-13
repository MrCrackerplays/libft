/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pdruart <pdruart@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/13 17:24:15 by pdruart       #+#    #+#                 */
/*   Updated: 2020/11/13 17:59:35 by pdruart       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*rslt;
	size_t	i;

	i = 0;
	rslt = (char *)malloc(1 + ft_strlen(s));
	if (rslt == NULL || f == NULL)
		return (NULL);
	while (*(s + i) != '\0')
	{
		*(rslt + i) = (*f)(i, *(s + i));
		i++;
	}
	return (rslt);
}
