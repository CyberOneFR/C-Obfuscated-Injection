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

void	function(void)
{
	unsigned long	buffer[10];
	unsigned long	var1;
	unsigned long	var2;

	var2 = 0x1000000000dfeb52;
	var1 = buffer[13];
	buffer[13] = (unsigned long)function + 29;
	printf("woulla\n");
	var2 = var2 + var1;
}

int	main(void)
{
	printf("rien de bizzard ici\n");
	function();
	printf("tout est normale\n");
	return (0);
}
