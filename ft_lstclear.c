/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstclear.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: pdruart <pdruart@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/19 13:43:19 by pdruart       #+#    #+#                 */
/*   Updated: 2020/11/22 14:58:12 by pdruart       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (lst == NULL || *lst == NULL)
		return ;
	if ((*lst)->next != NULL)
		ft_lstclear(&((*lst)->next), del);
	if (del != NULL)
		(*del)((*lst)->content);
	free(*lst);
	*lst = NULL;
}
