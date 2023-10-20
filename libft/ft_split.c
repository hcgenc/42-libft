/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hugenc <hugenc@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 17:17:11 by hugenc            #+#    #+#             */
/*   Updated: 2023/10/20 17:17:14 by hugenc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

static size_t	ft_countword(char const *s, char c)
{
	size_t	count;

	if (!*s)
		return (0);
	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**lst;
	size_t	word_len;
	int		i;

	lst = (char **)malloc((ft_countword(s, c) + 1) * sizeof(char *));
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				word_len = ft_strlen(s);
			else
				word_len = ft_strchr(s, c) - s;
			lst[i++] = ft_substr(s, 0, word_len);
			s += word_len;
		}
	}
	lst[i] = NULL;
	return (lst);
}


int main(void)
{
    // Test için bir giriş metni belirleyelim
    char input[] = "Merhaba,dunya,Nasil,gidiyor?";

    // ft_split fonksiyonunu kullanarak metni ayıralım
    char **result = ft_split(input, ',');

    // Elde edilen parçalanmış metni ekrana yazdıralım
    for (int i = 0; result[i] != NULL; ++i)
    {
        printf("%s\n", result[i]);
    }

    // Belleği serbest bırakalım
    for (int i = 0; result[i] != NULL; ++i)
    {
        free(result[i]);
    }
    free(result);

    return 0;
}