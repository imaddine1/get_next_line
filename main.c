/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iharile <iharile@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 09:52:07 by iharile           #+#    #+#             */
/*   Updated: 2021/11/25 15:57:51 by iharile          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <fcntl.h>
// #include <unistd.h>
#include "get_next_line.h"

int	main(void)
{
	int	fd;

	fd = open ("get.txt", O_RDONLY);
	printf ("%s\n", get_next_line(fd));
	printf ("%s\n", get_next_line(fd));
	printf ("%s\n", get_next_line(fd));
	printf ("%s", get_next_line(fd));
	return (0);
}
