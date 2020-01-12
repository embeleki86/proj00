/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embeleki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 16:45:17 by embeleki          #+#    #+#             */
/*   Updated: 2020/01/11 16:45:41 by embeleki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	char	*res;
	char	*beg;
	char	*end;
	char	buf;

	res = str;
	beg = str;
	end = str;
	while (*end != '\0')
		end++;
	end--;
	while (beg < end)
	{
		buf = *beg;
		*beg = *end;
		*end = buf;
		beg++;
		end--;
	}
	return (res);
}
