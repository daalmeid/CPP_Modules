/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dynamic.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalmeid <daalmeid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 14:52:40 by daalmeid          #+#    #+#             */
/*   Updated: 2022/06/21 14:56:52 by daalmeid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DYNAMIC_H
# define DYNAMIC_H

# include "A.hpp"
# include "B.hpp"
# include "C.hpp"

Base*	generate(void);
void identify(Base* p);
void identify(Base& p);

#endif