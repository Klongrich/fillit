#include "fillit.h"
int		nump(t_point **list)
{
	int i;

	i = 0;
	while (list[i])
		i++;
	return (i);
}

int		smallestboard(int num)
{
	int i;

	i = 0;
	while (i * i < num)
		i++;
	return (i * i);
}

static void	error_msg(void)
{
	write(2, "error\n", 6);
}

static void	fillit(const char *path)
{
	t_point	**minos;
	int		mino_nbr;
	int		p;
	int		sb;
	//t_point	**board;

	if ((minos = initialize_minos(path, &mino_nbr)) == NULL)
	{
		error_msg();
		return ;
	}
	
	p = nump(minos);
	sb = smallestboard(p);

	printf("Peices: %d\nSmallest Board: %d\n", p, sb);

	printboard(minos, p);

	if ((minos = solve(minos, 5, p, 0, 0, 0,NULL)) == NULL)
	{
		error_msg();
		return ;
	}
	else
	{
		printboard(minos, p);
		printf("\n");
		putboard(minos, 5);
	}
}

int	main(int ac, const char *av[])
{
	int	i;

	if (ac <= 1)
		return (0);
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
