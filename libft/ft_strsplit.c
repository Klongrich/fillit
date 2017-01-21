/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bpezeshk <bpezeshk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/17 14:11:53 by bpezeshk          #+#    #+#             */
/*   Updated: 2017/01/19 13:25:12 by bpezeshk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft.h"

static size_t	get_wc(const char *s, char c)
{
	char	f;
	size_t	wc;

	f = 0;
	wc = 0;
	if (!s)
	{
		return (0);
	}
	while (*s)
	{
		if (!f && *s && *s != c)
		{
			f = 1;
			wc++;
		}
		else if (f && *s == c)
		{
			f = 0;
		}
		s++;
	}
	return (wc);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**tab;
	size_t	i;
	size_t	j;
	size_t	wc;

	wc = get_wc(s, c);
	if (!s || (tab = (char **)malloc(sizeof(*tab) * (wc + 1))) == NULL)
	{
		return (NULL);
	}
	j = 0;
	while (*s && j < wc)
	{
		while (*s == c)
			s++;
		i = 0;
		while (s[i] && s[i] != c)
			i++;
		if ((tab[j] = ft_strndup(s, i)) == NULL)
			return (NULL);
		s += i;
		j++;
	}
	tab[j] = NULL;
	return (tab);
}
