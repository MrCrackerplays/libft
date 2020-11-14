/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: pdruart <pdruart@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/13 16:32:40 by pdruart       #+#    #+#                 */
/*   Updated: 2020/11/14 15:46:59 by pdruart       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		num_len(int n)
{
	int		i;
	int		add;

	if (n == -2147483648)
		return (11);
	if (n == 0)
		return (1);
	i = 1;
	add = -1;
	if (n < 0)
	{
		n = -n;
		add = 0;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i + add);
}

char	*ft_itoa(int n)
{
	char	*rslt;
	size_t	len;
	size_t	i;

	len = num_len(n);
	rslt = (char *)malloc(len + 1);
	if (rslt == NULL)
		return (NULL);
	i = 1;
	if (n < 0)
		*(rslt) = '-';
	if (n == 0)
	{
		*(rslt + len - i) = '0';
		i++;
	}
	while (n != 0)
	{
		*(rslt + len - i) = '0' + ((n < 0 ? -1 : 1) * (n % 10));
		n = n / 10;
		i++;
	}
	*(rslt + len) = '\0';
	return (rslt);
}
