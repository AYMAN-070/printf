/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayhammou <ayhammou@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 15:36:47 by ayhammou          #+#    #+#             */
/*   Updated: 2025/11/19 15:39:24 by ayhammou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"

int a = 42;
	
int main(void)
{
    ft_printf("ft : %c\n", 'A');
    printf("og : %c\n\n", 'A');

    ft_printf("ft : %s\n", "Hello");
    printf("og : %s\n\n", "Hello");
    
    ft_printf("ft : %d %i %d\n", 42, -42, 0);
    printf("og : %d %i %d\n\n", 42, -42, 0);

    ft_printf("ft : %u %u %u\n", 0, 42, 4294967295u);
    printf("og : %u %u %u\n\n", 0, 42, 4294967295u);

    ft_printf("ft : %x %X %x\n", 42, 42, 0);
    printf("og : %x %X %x\n\n", 42, 42, 0);

    ft_printf("ft : %x %x\n", -1, -42);
    printf("og : %x %x\n\n", -1, -42);

    ft_printf("ft : %p\n", &a);
    printf("og : %p\n\n", &a);

    return 0;
}