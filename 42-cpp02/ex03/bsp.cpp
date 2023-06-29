/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 12:41:46 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/06/29 14:16:11 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsp.hpp"
#include <math.h>

static Fixed   ft_abs(Fixed x) {
    return (x < 0) ? x * -1 : x;
}

static Fixed   getArea(float x1, float y1, float x2, float y2, float x3, float y3)
{
    //area = the absolute value of Ax(By - Cy) + Bx(Cy - Ay) + Cx(Ay - By)
    return ft_abs((float)(x1*(y2-y3) + x2*(y3-y1)+ x3*(y1-y2))/ 2.0f);
}

bool    bsp( Point const a, Point const b, Point const c, Point const point) {

    float ax, ay, bx, by, cx, cy, px, py;

    ax = a.getX().toFloat();
    ay = a.getY().toFloat();
    bx = b.getX().toFloat();
    by = b.getY().toFloat();
    cx = c.getX().toFloat();
    cy = c.getY().toFloat();
    px = point.getX().toFloat();
    py = point.getY().toFloat();



    Fixed totalArea = getArea(ax, ay, bx, by, cx, cy);
    Fixed area1 = getArea(px, py, bx, by, cx, cy);      //AREA PBC
    Fixed area2 = getArea(ax, ay, px, py, cx, cy);      //AREA APC
    Fixed area3 = getArea(ax, ay, bx, by, px, py);      //AREA ABP

    /* Check if is edge */
    if ( area1 == 0 || area2 == 0 || area3 == 0 ) {
        return (0);
    }
    return (totalArea == area1 + area2 + area3);
}
