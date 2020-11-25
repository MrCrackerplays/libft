/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: pdruart <pdruart@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/04 13:07:15 by pdruart       #+#    #+#                 */
/*   Updated: 2020/11/25 18:20:40 by pdruart       ########   odam.nl         */
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
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\f'
		|| str[i] == '\r' || str[i] == ' ')
		i++;
	pos = (str[i] == '-') ? -1 : 1;
	i = (str[i] == '-' || str[i] == '+') ? i + 1 : i;
	while (str[i] != '\0')
	{
		if (ft_isdigit(str[i]) == 0)
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
