/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putchar_fd.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: pdruart <pdruart@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/11 15:17:33 by pdruart       #+#    #+#                 */
/*   Updated: 2020/11/14 15:39:34 by pdruart       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "unistd.h"

void	ft_putchar_fd(char c, int fd)
{
	unsigned char	d;

	d = (unsigned char)c;
	write(fd, &d, 1);
}
