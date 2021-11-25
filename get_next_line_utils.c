/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharile <iharile@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 17:01:29 by iharile           #+#    #+#             */
/*   Updated: 2021/11/25 21:30:21 by iharile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strdup(char *s1)
{
	char	*s;
	char	*p;
	int		i;

	s = (char *)s1;
	i = 0;
	while (s[i])
		i++;
	p = malloc((i + 1) * sizeof(char));
	if (p == NULL)
		return (0);
	i = 0;
	while (s[i])
	{
		p[i] = s[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*str1;
	char	*str2;
	char	*p;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (0);
	i = 0;
	j = 0;
	p = malloc (sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (p == NULL)
		return (0);
	while (s1[i])
	{	
		p[i] = s1[i];
		i++;
	}
	while (s2[j])
		p[i++] = s2[j++];
	p[i] = '\0';
	return (p);
}

int	ft_strchr(char *s, int c)
{
	char			*str;
	int				i;
	char			b;

	if (!s)
		return (1);
	i = 0;
	b = (char)c;
	while (s[i])
	{
		if (s[i] == b)
			return (0);
		i++;
	}
	if (s[i] == b)
		return (0);
	return (1);
}

char	*ft_substr(char	*s, size_t start, size_t len)
{
	char			*s2;
	unsigned int	j;

	j = 0;
	if (!s)
		return (0);
	if (start > ft_strlen(s))
		len = 0;
	else if (ft_strlen(s) < len)
		len = ft_strlen(s) - start;
	s2 = malloc ((len + 1) * sizeof(char));
	if (s2 == NULL)
		return (0);
	while (s[start] && j < len)
		s2[j++] = s[start++];
	s2[j] = '\0';
	return (s2);
}

size_t	ft_strlen(char	*str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
