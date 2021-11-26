/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharile <iharile@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 20:44:04 by iharile           #+#    #+#             */
/*   Updated: 2021/11/26 15:45:29 by iharile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>
# include <stdlib.h>

char	*ft_strdup(char *s1);
char	*ft_strjoin(char const *s1, char const *s2);
int		ft_strchr(char *str);
size_t	ft_strlen(const char *s);
char	*get_next_line(int fd);
#endif
