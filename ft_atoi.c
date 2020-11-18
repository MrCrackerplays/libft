/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: pdruart <pdruart@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/04 13:07:15 by pdruart       #+#    #+#                 */
/*   Updated: 2020/11/18 12:42:15 by pdruart       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned long long	val;
	int					i;
	int					pos;

	i = 0;
	val = 0;
	pos = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f'
		|| str[i] == '\r' || str[i] == ' ')
		i++;
	while (str[i] != '\0')
	{
		if (pos == 0 && (str[i] == '-' || str[i] == '+'))
			pos = (str[i] == '-') ? -1 : 1;
		else if (ft_isdigit(str[i]) == 0)
			break ;
		else if (val > 922337203685477580ll
			|| (val == 922337203685477580ll && str[i] > '7'))
			return (pos == -1 ? 0 : -1);
		else
			val = (val * 10) + (str[i] - '0');
		i++;
	}
	return (val * (pos < 0 ? -1 : 1));
}
