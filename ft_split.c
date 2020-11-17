/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: pdruart <pdruart@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/13 14:56:02 by pdruart       #+#    #+#                 */
/*   Updated: 2020/11/17 16:28:49 by pdruart       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_str_count(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) != c && (i == 0 || *(s + i - 1) == c))
			count++;
		i++;
	}
	return (count);
}

int		doit(char const *s, size_t i, long *start, char ***arr)
{
	char	*ptr;

	ptr = (char *)malloc(i - *start + 1);
	if (ptr == NULL)
		return (1);
	ft_memmove(ptr, (s + *start), i - *start);
	*(ptr + i - *start) = '\0';
	**arr = ptr;
	*arr = *arr + 1;
	*start = -1;
	return (0);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	long	start;
	char	**arr;
	size_t	num;

	if (s == NULL)
		return (NULL);
	num = ft_str_count(s, c);
	arr = (char **)malloc((num + 1) * sizeof(char *));
	if (arr == NULL)
		return (NULL);
	i = 0;
	start = -1;
	while (*(s + i) != '\0')
	{
		if (start == -1 && *(s + i) != c)
			start = i;
		else if (start != -1 && *(s + i) == c && doit(s, i, &start, &arr) == 1)
			return (NULL);
		i++;
	}
	if (start != -1 && doit(s, i, &start, &arr) == 1)
		return (NULL);
	*arr = NULL;
	return ((arr - num));
}
