/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharile <iharile@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 13:36:02 by iharile           #+#    #+#             */
/*   Updated: 2021/11/27 18:51:01 by iharile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	main(void)
{
	int	fd;
	int	fd2;

	fd = open("AAAAJDJDJDJDJD", 0);
	printf ("%s", get_next_line(fd));
	printf ("%s", get_next_line(fd));
	printf ("%s", get_next_line(fd));
	printf ("%d\n", fd);
		return (0);
}