/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec_byte.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ethebaul <ethebaul@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 01:17:39 by ethebaul          #+#    #+#             */
/*   Updated: 2025/12/19 21:46:36 by ethebaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	function(void)
{
	unsigned long	of;

	of = (&of)[3];
	printf("%p\n", of);
}

int	main(void)
{
	function();
	return (0);
}
