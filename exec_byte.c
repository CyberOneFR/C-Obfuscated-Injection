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
	unsigned long	var1;
	unsigned long	var2;

	var2 = 0x1000000000c3c952;
	var1 = (&var2)[4];
	printf("	%p: %p\n", &(&var2)[10], (&var2)[10]);
	printf("	%p: %p\n", &(&var2)[9], (&var2)[9]);
	printf("	%p: %p\n", &(&var2)[8], (&var2)[8]);
	printf("	%p: %p\n", &(&var2)[7], (&var2)[7]);
	printf("	%p: %p\n", &(&var2)[6], (&var2)[6]);
	printf("	%p: %p\n", &(&var2)[5], (&var2)[5]);
	printf("RIP	%p: %p\n", &(&var2)[4], (&var2)[4]);
	printf("RBP	%p: %p\n", &(&var2)[3], (&var2)[3]);
	printf("Canary	%p: %p\n", &(&var2)[2], (&var2)[2]);
	printf("var1	%p: %p\n", &(&var2)[1], (&var2)[1]);
	printf("var2	%p: %p\n", &(&var2)[0], (&var2)[0]);
	printf("\n");
	(&var2)[4] = (unsigned long)function + 25;
	var2 = var2 + var1;
}

int	main(void)
{
	printf("rien de bizzard ici\n");
	function();
	printf("tout est normale\n");
	return (0);
}
