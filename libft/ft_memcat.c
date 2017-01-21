/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpezeshk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/19 00:34:01 by bpezeshk          #+#    #+#             */
/*   Updated: 2017/01/19 13:05:58 by bpezeshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

void	*ft_memcat(void *dst, size_t dlen, const void *src, size_t slen)
{
	return (memcpy(dst + dlen, src, slen) - dlen);
}
