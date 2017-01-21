/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memscat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpezeshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 00:30:52 by bpezeshk          #+#    #+#             */
/*   Updated: 2017/01/19 13:07:29 by bpezeshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	*ft_memscat(void *dst, size_t dlen, const void *src, size_t slen)
{
	return (memmove(dst + dlen, src, slen) - dlen);
}
