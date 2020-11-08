/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: pdruart <pdruart@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/04 13:07:15 by pdruart       #+#    #+#                 */
/*   Updated: 2020/11/08 19:34:19 by pdruart       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long int	val;
	int			i;
	int			neg;

	i = 0;
	val = 0;
	neg = 1;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f'
		|| str[i] == '\r' || str[i] == ' ')
		i++;
	while (str[i] != '\0')
	{
		if (neg == 1 && str[i] == '-')
			neg = -1;
		else if (ft_isdigit(str[i]))
		{
			val *= 10;
			val += (str[i] - '0');
		}
		else
			break ;
		i++;
	}
	return (val * neg);
}
