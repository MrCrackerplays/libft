/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: pdruart <pdruart@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/13 14:56:02 by pdruart       #+#    #+#                 */
/*   Updated: 2020/11/14 18:04:14 by pdruart       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	start;
	char	*ptr;
//found out how to best malloc the array, just malloc the amount of times the delimiter occurs (without it being proceeded by another occurance of the delimiter) + 1 for the NULL pointer and then just put the pointers generated for every string into that array
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
