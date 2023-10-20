/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugenc <hugenc@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:15:39 by hugenc            #+#    #+#             */
/*   Updated: 2023/10/20 17:15:40 by hugenc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"


char *ft_strrev(char *str)
{
    int i;
    int j;
    int tmp;

    i = 0;
    j = ft_strlen(str);

    while (j > i)
    {
        j--;
        tmp = str[i];
        str[i] = str[j];
        str[j] = tmp;
        i++;
    }

    return str;
}


char	*ft_itoa(int nbr)

{

	int i;
	int neg;
	char *tmp;

	i = 0;
	neg = 0;
	tmp = malloc(sizeof(char) * 12);

	if (tmp == NULL || nbr == 0)
		return ((nbr == 0) ? "0" : NULL);

	if (nbr == -2147483648)
		return ("-2147483648");

	if (nbr < 0)
	{
		neg = 1;
		nbr *= -1;
	}

	while (nbr)
	{
		tmp[i++] = (nbr % 10) + '0';
		nbr /= 10;
	}

	if (neg)
		tmp[i] = '-';
	return ft_strrev(tmp);

}