/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 12:38:57 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/06/23 12:41:35 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSP_HPP
#define BSP_HPP

#include "Point.hpp"
#include "Fixed.hpp"
#include <iostream>

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif