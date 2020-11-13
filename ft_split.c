/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: pdruart <pdruart@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/13 14:56:02 by pdruart       #+#    #+#                 */
/*   Updated: 2020/11/13 17:18:05 by pdruart       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	start;
	char	*ptr;

	if (s == NULL)
		return (NULL);
	i = 0;
	start = 0;
	ptr = NULL;
	while (*(s + i) != '\0')
	{
		if (ptr == NULL && *(s + i) != c)
		{
			ptr = (char *)(s + i);
			start = i;
		}
		else if (ptr != NULL && *(s + i) == c)
		{
			if (start)
				start = 2;
			//don't work lmao finish it up once I figure out how to best malloc the array
			ptr = NULL;
		}
		i++;
	}
	return (NULL);
	
}
