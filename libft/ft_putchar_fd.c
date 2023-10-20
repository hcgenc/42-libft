/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugenc <hugenc@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:16:25 by hugenc            #+#    #+#             */
/*   Updated: 2023/10/20 17:16:44 by hugenc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putchar_fd(char c, int fd)
{
    write(fd, &c, 1);

}


int main()
{
    int fd;
    char s = 'S';
    fd = open("Saval.txt", O_WRONLY);
    ft_putchar_fd(s , fd);
    close(fd);

    return 0;
}