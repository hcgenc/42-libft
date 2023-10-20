/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugenc <hugenc@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:17:47 by hugenc            #+#    #+#             */
/*   Updated: 2023/10/20 17:17:49 by hugenc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void processUpperCase(unsigned int index, char *ch) {
    if (*ch >= 'a' && *ch <= 'z') {
        *ch = *ch - ('a' - 'A');
    }

    printf("Index: %u, Uppercase: %c\n", index, *ch);
}

void ft_striteri(char *s, void (*f)(unsigned int, char*)) {
    int i = 0;

    while (s[i] != '\0') {
        f(i, &s[i]);
        i++;
    }
}

/*
int main(void) {
    char s[] = "huseyin";
    ft_striteri(s, processUpperCase);

    return 0;
}
*/
