#include "./fillit.h"

t_mino	*make_mino(char *s)
{
	t_mino			*mino;
	unsigned char	i;

	if ((mino = (t_mino *)malloc(sizeof(t_mino))) == NULL)
	{
		return (NULL);
	}
	if ((mino->tab = (char **)malloc(sizeof(*(mino->tab)) * 5)) == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < 4)
	{
		if ((mino->tab[i] = ft_strndup(s, 4)) == NULL)
		{
			return (NULL);
		}
		s += 5;
	}
	mino->tab[4] = NULL;
	return (mino);
}


t_mino	*valid_mino(char *in)
{
	int	i;

	i = 20;
	while (i && *in)
	{
		in++;
		i--;
	}
	return (i ? make_mino(in) : NULL);
}
/*
t_mino	**pieces_init(const char *path)
{
	t_mino	**minos;
	char	*raw_in;
	size_t	in_len;
	char	f;

	if ((raw_in = filetostr(path)) == NULL)
	{
		return (NULL);
	}
	printf("%s", raw_in);
	if (((in_len = ft_strlen(raw_in)) + 1) % 21)
	{
		return (NULL);
	}
	f = 1;
	while (*raw_in)
	{
		if (f)
			f = 0;
		else
		{
			if (*raw_in != '\n')
				return (NULL);
			raw_in++;
		}
		if (!valid_mino(raw_in))
			return (NULL);
		if (!inlen)
			break ;
		raw_in += 21;
	}
	return (1);
}*/