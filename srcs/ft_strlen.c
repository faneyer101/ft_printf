/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strlen.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: faneyer <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/02 10:11:40 by faneyer      #+#   ##    ##    #+#       */
/*   Updated: 2019/04/30 07:25:23 by faneyer     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

size_t	ft_strlen(const char *s)
{
	size_t	compteur;

	compteur = 0;
	if (s != NULL)
	{
		while (s[compteur])
			compteur++;
	}
	return (compteur);
}
