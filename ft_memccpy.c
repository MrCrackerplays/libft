/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memccpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: pdruart <pdruart@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/04 16:26:07 by pdruart       #+#    #+#                 */
/*   Updated: 2020/11/04 19:13:11 by pdruart       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//  The memccpy() function copies bytes from string src to string dst.
//  If the character c (as converted to an unsigned char) occurs in the
//  string src, the copy stops and a pointer to the byte after the copy
//  of c in the string dst is returned.  Otherwise, n bytes are copied,
//  and a NULL pointer is returned.
void	*ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
	char	*l;
	char	*r;
	size_t	i;

	l = (char *)dst;
	r = (char *)src;
	i = 0;
	while (i < n)
	{//add magic stuffs for checking char and returning pointer to byte after that char if it exists
		if (r[i] == c)
		{
			//stuff here maybe?
			return (&(r[i+1]));
		}
		l[i] = r[i];
		i++;
	}
	return (NULL);
}
