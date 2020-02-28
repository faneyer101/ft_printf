/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strstr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: faneyer <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/07/09 17:32:52 by faneyer      #+#   ##    ##    #+#       */
/*   Updated: 2019/04/30 07:28:25 by faneyer     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	size_t	j;
	size_t	ind2;
	size_t	i;

	j = 0;
	ind2 = 0;
	if (*to_find == '\0')
		return ((char*)&str[0]);
	while (str[ind2] != '\0')
	{
		j = 0;
		i = ind2;
		while (str[ind2] == to_find[j] && to_find[j] != '\0')
		{
			j++;
			ind2++;
		}
		if (to_find[j] == '\0')
			return ((char*)&str[i]);
		else
			ind2 = i + 1;
	}
	if (str[ind2] == '\0' && to_find[j + 1] == '\0' && str[ind2] == to_find[j])
		return ((char*)&str[i]);
	return (NULL);
}
