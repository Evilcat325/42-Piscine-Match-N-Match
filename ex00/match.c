/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seli <seli@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/28 23:55:18 by seli              #+#    #+#             */
/*   Updated: 2018/09/30 15:45:43 by seli             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define EXIT(X, Y) (!*X && !*Y) || (*Y != '*' && *X != *Y)

int	match(char *s1, char *s2)
{
	while (*s1 && *s2 == '*' && match(s1, s2 + 1) == 0)
		s1++;
	return (EXIT(s1, s2) ? (!*s1 && !*s2) : match(s1 + (*s2 != '*'), s2 + 1));
}
