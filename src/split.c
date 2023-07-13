/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bifrost <nkeyani-@student.42barcelona.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 10:32:48 by nkeyani-          #+#    #+#             */
/*   Updated: 2023/07/13 18:37:57 by bifrost          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "../include/push_swap.h"

char	*ft_strdup(const char *s)
{
	size_t	len;
	int		i;
	char	*dup;

	len = ft_strlen(s);
	dup = (char *)malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

static char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptrs;
	size_t	i;

	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (start + len > ft_strlen(s))
		len = ft_strlen(s) - start;
	ptrs = (char *)malloc(sizeof(char) * (len + 1));
	if (ptrs == NULL)
		return (NULL);
	i = 0;
	while (i < len && s[i])
	{
		ptrs[i] = s[i + start];
		i++;
	}
	ptrs[i] = '\0';
	return (ptrs);
}

static char	**ft_freeall(char **tab, size_t i)
{
	while (i-- > 0)
		free(tab[i]);
	free(tab);
	return (NULL);
}

static size_t	ft_splitlen(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			i++;
		while (*s && *s != c)
			s++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	char	*start;
	size_t	i;

	arr = malloc((ft_splitlen(s, c) + 1) * sizeof(char *));
	if (!arr)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			start = (char *)s;
			while (*s && *s != c)
				s++;
			arr[i] = ft_substr(start, 0, s - start);
			if (!arr[i])
				return (ft_freeall(arr, i));
			i++;
		}
	}
	arr[i] = NULL;
	return (arr);
}
*/