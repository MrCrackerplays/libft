/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstmap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: pdruart <pdruart@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/19 14:02:13 by pdruart       #+#    #+#                 */
/*   Updated: 2020/11/19 14:38:18 by pdruart       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	result = ft_lstnew((*f)(lst->content));
	if (result == NULL)
		return (NULL);
	result->next = ft_lstmap(lst->next, f, del);
	return (result);
}
