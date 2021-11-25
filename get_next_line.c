/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharile <iharile@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 17:09:33 by iharile           #+#    #+#             */
/*   Updated: 2021/11/25 21:36:24 by iharile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*before_newline(char *s)
{
	int		i;
	int		j;
	char	*p;

	i = 0;
	while (s[i])
	{
		if (s[i] == '\n')
			break ;
		i++;
	}
	j = 0;
	p = malloc ((i + 2) * sizeof(char));
	while (j < i)
	{
		p[j] = s[j];
		j++;
	}
	p[j++] = '\n';
	p[j] = '\0';
	return (p);
}

char	*after_newline(char *s, int buf)
{
	int		i;
	int		res;
	char	*p;
	int		j;

	j = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == '\n')
			break ;
		i++;
	}
	i++;
	res = buf - i;
	p = malloc ((res + 1) * sizeof(char));
	while (res < buf)
		p[j++] = s[res++];
	p[j] = '\0';
	return (p);
}

char	*get_next_line(int fd)
{
	static char	*buffer;
	char		*new;
	int			i;
	char		*oldval;

	new = malloc (sizeof(char) * BUFFER_SIZE);
	if (!buffer)
	{
		i = read (fd, new, BUFFER_SIZE);
		buffer = ft_strdup(new);
	}
	while (ft_strchr(buffer, '\n') && i)
	{
		i = read(fd, new, BUFFER_SIZE);
		if (i == -1)
		{
			free (new);
			return (buffer);
		}
		buffer = ft_strjoin(buffer, new);
	}
	oldval = before_newline(buffer);
	buffer = after_newline(new, BUFFER_SIZE);
	return (oldval);
}
