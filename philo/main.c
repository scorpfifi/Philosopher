/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmpianim <vmpianim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 13:57:12 by vmpianim          #+#    #+#             */
/*   Updated: 2024/12/17 13:06:32 by vmpianim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	main (int argc, char **argv)
{

	t_philosopher *philo;
	
	philo = malloc(sizeof(t_philosopher));
	assign_value(argc, argv, philo);
	return (0);
}
