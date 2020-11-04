/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: pdruart <pdruart@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/04 13:07:15 by pdruart       #+#    #+#                 */
/*   Updated: 2020/11/04 13:51:16 by pdruart       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		val;
	int		i;
	int		neg;

	i = 0;
	val = 0;
	neg = 0;
	while (str[i] != '\0')
	{
		if (i == 0 && str[i] == '-')
			neg++;
		else if (ft_isdigit(str[i]))
		{
			val *= 10;
			val += (str[i] - '0');
		}
		else
			break ;
		i++;
	}
	if (neg)
		val = -val;
	return (val);
}
