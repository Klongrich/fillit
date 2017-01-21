/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpezeshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 00:32:29 by bpezeshk          #+#    #+#             */
/*   Updated: 2017/01/19 13:44:38 by bpezeshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

t_list	*ft_lstdup(t_list *lst)
{
	t_list	*new;
	t_list	*tmp;

	new = NULL;
	while (lst)
	{
		if ((tmp = ft_lstnew(lst->content, lst->content_size)) == NULL)
		{
			return (NULL);
		}
		ft_lstpush(&new, ft_lstdupone(lst));
		lst = lst->next;
	}
	return (new);
}
