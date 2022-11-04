/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   secured_functions_1.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efrancon <efrancon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 11:59:54 by efrancon          #+#    #+#             */
/*   Updated: 2021/12/13 23:49:19 by efrancon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

char	*safe_strdup_free(char *str, t_data *data, char **strs)
{
	char	*new_str;

	if (!str)
		return (NULL);
	new_str = ft_strdup(str);
	if (!new_str)
	{
		if (strs && strs[0])
			free_double_str(strs);
		else if (strs)
			free(strs);
		exit_error_str(NULL, "malloc()", data);
	}
	return (new_str);
}

char	*safe_strdup(char *str, t_data *data)
{
	char	*new_str;

	if (!str)
		return (NULL);
	new_str = ft_strdup(str);
	if (!new_str)
		exit_error_str(str, "malloc()", data);
	return (new_str);
}

char	**safe_split_on_first(char *str, char c, t_data *data)
{
	char	**new_str;

	if (!str)
		return (NULL);
	new_str = ft_split_on_first(str, c);
	if (!new_str)
		exit_error_strs(NULL, "malloc()", data);
	return (new_str);
}

char	**safe_split(const char *str, char c, t_data *data)
{
	char	**new_str;

	if (!str)
		return (NULL);
	new_str = ft_split(str, c);
	if (!new_str)
		exit_error_strs(NULL, "malloc()", data);
	return (new_str);
}
