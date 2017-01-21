#include "./fillit.h"

int		file_len(const char *path)
{
	int		fd;
	char	buf;
	int		len;
	int		status;

	fd = open(path, O_RDONLY);
	if (fd == -1 || (status = read(fd, &buf, 1)) < 0)
	{
		return (-1);
	}
	close(fd);
	fd = open(path, O_RDONLY);
	len = 0;
	while ((status = read(fd, &buf, 1)) > 0)
	{
		len++;
	}
	close(fd);
	return (status != 0 ? -1 : len);
}

char	*filetostr(const char *path)
{
	char	*s;
	int		fd;
	char	buf;
	int		i;

	i = file_len(path);
	if (i < 0 || (s = ft_strnew(i)) == NULL)
	{
		return (NULL);
	}
	fd = open(path, O_RDONLY);
	i = 0;
	while (read(fd, &buf, 1) > 0)
	{
		s[i] = buf;
		i++;
	}
	s[i] = '\0';
	close(fd);
	return (s);
}
