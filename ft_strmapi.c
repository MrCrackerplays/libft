/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pdruart <pdruart@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/13 17:24:15 by pdruart       #+#    #+#                 */
/*   Updated: 2020/11/14 15:43:37 by pdruart       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*rslt;
	size_t	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	rslt = (char *)malloc(1 + ft_strlen(s));
	if (rslt == NULL || f == NULL)
		return (NULL);
	while (*(s + i) != '\0')
	{
		*(rslt + i) = (*f)(i, *(s + i));
		i++;
	}
	*(rslt + i) = '\0';
	return (rslt);
}
