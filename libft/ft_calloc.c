/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugenc <hugenc@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:14:57 by hugenc            #+#    #+#             */
/*   Updated: 2023/10/20 17:14:58 by hugenc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"

void    *ft_calloc(size_t count, size_t size)
{
    void *ptr;
    ptr = malloc(count * size);
    if (ptr == NULL)
        return (ptr);
    char *char_ptr = (char*)ptr;
    ft_bzero(char_ptr, size * count);
    return (ptr);
}