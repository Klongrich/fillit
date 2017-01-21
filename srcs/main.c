#include "./fillit.h"

void	error_msg()
{
	write(2, "error\n", 6);
}

void	puttab(char **board)
{
	while (*board)
	{
		ft_putstr(*board);
		board++;
	}
}

void	fillit(const char *path)
{
	t_mino	**pieces;
	//char	**board;

	if ((pieces = pieces_init(path)) == NULL)
	{
		error_msg();
		return ;
	}
	/*if ((board = solver(pieces)) == NULL)
	{
		error_msg();
		return ;
	}
	else
	{
		puttab(board);
	}*/
}

int	main(int ac, const char *av[])
{
	int	i;

	if (ac <= 1)
	{
		return (0);
	}
	else
	{
		i = 1;
		while (i < ac)
		{
			fillit(av[i]);
			i++;
		}
	}
	return (0);
}
