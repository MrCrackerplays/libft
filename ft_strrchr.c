/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pdruart <pdruart@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/30 12:02:52 by pdruart       #+#    #+#                 */
/*   Updated: 2020/10/31 15:57:08 by pdruart       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*result;

	result = NULL;
	while (*s != '\0')
	{
		s++;
		if (*s == c)
			result = (char *)s;
	}
	if (*s == c)
		result = (char *)s;
	return (result);
}
