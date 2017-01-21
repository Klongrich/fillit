#ifndef FILLIT_H
# define FILLIT_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include "../libft/libft.h"

typedef struct
{
	char	**tab;
}			t_mino;

void	error_msg();
void	puttab(char **board);
void	fillit(const char *path);

t_mino	*valid_mino(char *in);
t_mino	**pieces_init(const char *path);

int		file_len(const char *path);
char	*filetostr(const char *path);

#endif