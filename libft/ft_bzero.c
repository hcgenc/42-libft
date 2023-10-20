/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugenc <hugenc@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:14:47 by hugenc            #+#    #+#             */
/*   Updated: 2023/10/20 17:14:52 by hugenc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
    unsigned char *ptr;
    size_t i;

    ptr = s;
    if(n <= 0)
        return;

    i = 0;
    while (i < n)
    {   
        *ptr++ = 0;
        i++;
    }
}

/*
int main(void)
{

    char s[10] = "aaaa";

    ft_bzero(s,10);

    return 0;
}
*/