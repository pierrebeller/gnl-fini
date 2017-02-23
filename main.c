/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbeller <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/21 09:25:00 by pbeller           #+#    #+#             */
/*   Updated: 2017/02/21 09:27:25 by pbeller          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft/libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>

int		main(int ac, char **av)
{
	int	fd1;
	int fd2;
	char *line;


	fd1 = open(av[1], O_RDONLY);
	fd2 = open(av[2], O_RDONLY);
	printf("retour de GNL : %d\n", get_next_line(fd1, &line));
	printf("1er fichier, 1ere ligne : %s\n", line);
	printf("retour de GNL : %d\n", get_next_line(fd2, &line));
	printf("2e fichier, 1ere ligne : %s\n", line);
	printf("retour de GNL : %d\n", get_next_line(fd1, &line));
	printf("1er fichier, 2e ligne : %s\n", line);
	printf("retour de GNL : %d\n", get_next_line(fd2, &line));
	printf("2e fichier, 2e ligne : %s\n", line);
	printf("retour de GNL : %d\n", get_next_line(fd1, &line));
	printf("3e ligne : %s\n", line);
	free(line);
	return (0);
}
