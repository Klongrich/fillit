/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpezeshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 00:31:32 by bpezeshk          #+#    #+#             */
/*   Updated: 2017/01/19 13:44:08 by bpezeshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*tmp;

	if (!f)
	{
		return (NULL);
	}
	new = NULL;
	while (lst)
	{
		tmp = f(lst);
		if ((tmp = ft_lstnew(tmp->content, tmp->content_size)) == NULL)
		{
			return (NULL);
		}
		ft_lstpush(&new, tmp);
		lst = lst->next;
	}
	return (new);
}
