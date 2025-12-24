/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec_byte.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 01:17:39 by ethebaul          #+#    #+#             */
/*   Updated: 2025/12/20 00:21:01 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	function(int fd, char *str, unsigned long len)
{
	unsigned long	buffer[2];

	(void)fd;
	(void)str;
	(void)len;
	buffer[1] = 0x0007ebe589485552;
	buffer[1] = 0x000008eb40ec8348;
	buffer[1] = 0x00000009eb58016a;
	buffer[1] = 0x06ebdc7d89dc7d8b;
	buffer[1] = 0x00000009ebdc7d8b;
	buffer[1] = 0x000008ebd0758b48;
	buffer[1] = 0xc3c9050fc8558b48;
	buffer[0] = buffer[5];
	buffer[5] = (unsigned long)function + 40;
	buffer[0] += buffer[1];
}

int	main(void)
{
	function(1, "Simplement la fonction write en C rien de compliqué\n", 54);
	return (0);
}
