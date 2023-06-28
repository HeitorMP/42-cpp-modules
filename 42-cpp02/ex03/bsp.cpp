/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 12:41:46 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/06/28 10:00:40 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsp.hpp"
#include <math.h>

static Fixed   ft_abs(Fixed x) {
    return (x < 0) ? x * -1 : x;
}

Fixed   getArea(int x1, int y1, int x2, int y2, int x3, int y3)
{
    //area = the absolute value of Ax(By - Cy) + Bx(Cy - Ay) + Cx(Ay - By)
    return ft_abs((float)(x1*(y2-y3) + x2*(y3-y1)+ x3*(y1-y2)));
}

bool    bsp( Point const a, Point const b, Point const c, Point const point) {

    Fixed totalArea = getArea(a.getX(), a.getY(), b.getX(), b.getY(), c.getX(), c.getY());

    Fixed area1 = getArea(point.getX(), point.getY(), b.getX(), b.getY(), c.getX(), c.getY()); //AREA PBC
    Fixed area2 = getArea(a.getX(), a.getY(), point.getX(), point.getY(), c.getX(), c.getY()); //AREA APC
    Fixed area3 = getArea(a.getX(), a.getY(), b.getX(), b.getY(), point.getX(), point.getY()); //AREA ABP

    /* Check if is border */
    if ( area1 == 0 || area2 == 0 || area3 == 0 ) {
        return (0);
    }
    return (totalArea == area1 + area2 + area3);
}

int main(int argc, char const *argv[])
{
    (void)argc; (void)argv;

    bool teste;

    teste = bsp( Point(0, 0), Point(5, 5), Point(5, 0), Point(4, 0) );
    std::cout << "Is it in?: " << teste << std::endl;
    teste = bsp( Point(0, 0), Point(5, 5), Point(5, 0), Point(4, 1) );
    std::cout << "Is it in?: " << teste << std::endl;
    teste = bsp( Point(0, 0), Point(5, 5), Point(5, 0), Point(4, 2) );
    std::cout << "Is it in?: " << teste << std::endl;
    teste = bsp( Point(0, 0), Point(5, 5), Point(5, 0), Point(4, 3) );
    std::cout << "Is it in?: " << teste << std::endl;
    teste = bsp( Point(0, 0), Point(5, 5), Point(5, 0), Point(4, 4) );
    std::cout << "Is it in?: " << teste << std::endl;
    teste = bsp( Point(0, 0), Point(5, 5), Point(5, 0), Point(4, 5) );
    std::cout << "Is it in?: " << teste << std::endl;

    return 0;
}
