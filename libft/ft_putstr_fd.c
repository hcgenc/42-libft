/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugenc <hugenc@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:17:06 by hugenc            #+#    #+#             */
/*   Updated: 2023/10/20 17:17:08 by hugenc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void    ft_putstr_fd(char *s, int fd)
{
    int i;

    i = 0;
    while (s[i])
        write(fd, &s[i++], 1);
}




int main()
{
    int fd;
    char s[] = "Sevval";
    fd = open("Saval.txt", O_WRONLY);
    ft_putstr_fd(s , fd);
    close(fd);
    
}