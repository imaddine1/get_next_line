/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharile <iharile@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 20:44:04 by iharile           #+#    #+#             */
/*   Updated: 2021/11/25 20:50:44 by iharile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>
# include <stdlib.h>

char	*ft_strdup(char *s1);
char	*ft_strjoin(char *s1, char *s2);
int		ft_strchr(char *s, int c);
char	*ft_substr(char	*s, size_t start, size_t len);
size_t	ft_strlen(char	*str);

#endif

