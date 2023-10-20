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
/*
int main(void) {
    int* ptr;
    int n, i;

   
    n = 10;
    ptr = (int*)ft_calloc(n, sizeof(int));

    // Bellek tahsisinin başarılı olup olmadığını kontrol et
    if (ptr == NULL) {
        printf("Bellek tahsis edilemedi.\n");
        return 1;
    }

    // Elemanları yazdır (sıfır olması bekleniyor)
    for (i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }

    // Belleği serbest bırak
    free(ptr);

    return 0;
}*/