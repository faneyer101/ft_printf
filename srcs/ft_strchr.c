/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strchr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: faneyer <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/06 15:13:04 by faneyer      #+#   ##    ##    #+#       */
/*   Updated: 2019/05/07 13:34:29 by faneyer     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

char	*ft_strchr(const char *s, int c)
{
	if (s != NULL)
	{
		while (*s)
		{
			if (*s == (char)c)
				return ((char*)s);
			s++;
		}
		if (*s == '\0' && (char)c == '\0')
			return ((char*)s);
	}
	return (NULL);
}
