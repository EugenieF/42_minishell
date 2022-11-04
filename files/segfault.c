/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   segfault.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efrancon <efrancon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 13:22:32 by efrancon          #+#    #+#             */
/*   Updated: 2021/12/08 13:22:34 by efrancon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <signal.h>

int	main(void)
{
	kill(0, SIGSEGV);
	return (0);
}
