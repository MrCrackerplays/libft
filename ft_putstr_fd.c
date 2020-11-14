/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: pdruart <pdruart@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/11 15:18:55 by pdruart       #+#    #+#                 */
/*   Updated: 2020/11/14 15:28:23 by pdruart       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	ft_putstr_fd(char *s, int fd)
{
	while (s != NULL && *s != '\0')
	{
		write(fd, s, 1);
		s++;
	}
}
