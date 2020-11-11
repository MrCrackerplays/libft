/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pdruart <pdruart@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/11 17:30:02 by pdruart       #+#    #+#                 */
/*   Updated: 2020/11/11 19:11:21 by pdruart       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		contains(char const *set, char const chr)
{
	unsigned int	i;

	i = 0;
	while (*(set + i) != '\0')
	{
		if (*(set + i) == chr)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*str;
	unsigned int	start;
	unsigned int	end;
	unsigned int	i;

	start = 0;
	while (*(s1 + start) != '\0')
	{
		if (contains(set, *(s1 + start)) == 0)
			break ;
		start++;
	}
	end = ft_strlen(s1) - 1;
	while (end > start)
	{
		if (contains(set, *(s1 + end)) == 0)
			break ;
		end--;
	}
	str = malloc(end + 1 - start);
	i = 0;
	while (start < end)
	{
		*(str + i) = *(s1 + start);
		start++;
		i++;
	}
	*(str + i) = '\0';
	return (str);
}
