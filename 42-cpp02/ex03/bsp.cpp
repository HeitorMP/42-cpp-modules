/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmaciel- <hmaciel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 12:41:46 by hmaciel-          #+#    #+#             */
/*   Updated: 2023/06/24 12:00:02 by hmaciel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsp.hpp"
#include <math.h>
#include <cstdio>
#include <GL/gl.h>
#include <GL/glut.h>
#include <GL/glu.h>

static Fixed   ft_abs(Fixed x) {
    return (x < 0) ? x * -1 : x;
}

void setup() {   glClearColor(1.0f, 1.0f, 1.0f, 1.0f); }

void display()
   {
      glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
      glColor3f(0.0f, 0.0f, 0.0f);
      glRectf(-0.75f,0.75f, 0.75f, -0.75f);
      glutSwapBuffers();
   }

Fixed   getArea(int x1, int y1, int x2, int y2, int x3, int y3)
{
    //area = the absolute value of Ax(By - Cy) + Bx(Cy - Ay) + Cx(Ay - By) divided by 2
    // (4/2) |x1(y2 − y3) + x2(y3 − y1) + x3(y1 − y2)
    return ft_abs( (float)(0.5 * (x1*(y2-y3) + x2*(y3-y1)+ x3*(y1-y2))));
}

bool    bsp( Point const a, Point const b, Point const c, Point const point) {

    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;
    std::cout << point << std::endl;
    Fixed totalArea = getArea(a.getX(), a.getY(), b.getX(), b.getY(), c.getX(), c.getY());

    Fixed area1 = getArea(point.getX(), point.getY(), b.getX(), b.getY(), c.getX(), c.getY()); //AREA PBC
    Fixed area2 = getArea(a.getX(), a.getY(), point.getX(), point.getY(), c.getX(), c.getY()); //AREA APC
    Fixed area3 = getArea(a.getX(), a.getY(), b.getX(), b.getY(), point.getX(), point.getY()); //AREA ABP

    /* Check if sum of A1, A2 and A3 is same as A */

    std::cout << "total: " << totalArea << std::endl;
    std::cout << "area1 " << area1 << std::endl;
    std::cout << "area2 " << area2 << std::endl;
    std::cout << "area3 " << area3 << std::endl;

    return (totalArea != area1 + area2 + area3);
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
    teste = bsp( Point(0, 0), Point(5, 5), Point(5, 0), Point(4.5f, 4) );
    std::cout << "Is it in?: " << teste << std::endl;
    teste = bsp( Point(0, 0), Point(5, 5), Point(5, 0), Point(4, 5) );
    std::cout << "Is it in?: " << teste << std::endl;
    
    glutInit();
    glutInitDisplayMode(GLUT_RGB | GLUT_DEPTH | GLUT_DOUBLE);
    glutInitWindowSize(800,600);
    glutCreateWindow("Hello World");

    setup();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
