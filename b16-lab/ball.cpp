/** file: ball.cpp
 ** brief: Ball class - implementation
 ** author: Andrea Vedaldi
 **/

#include "ball.h"

#include <iostream>

Ball::Ball()
: r(0.1), x(0), y(0), vx(0.3), vy(-0.1), g(9.8), m(1),
xmin(-1), xmax(1), ymin(-1), ymax(1)
{
  // Abaixo foi adicionado o código que seta a posição inicial e que, caso o valor seja maior ou menor
  // do que os valor da restrição da bola, ele seta 0 para a coordenada.
  double xx, yy;
  std::cout << "Set the starting position:\n";
  std::cin >> xx >> yy;
  if(xx >= xmax - r)
  {
    std::cout << "The x coordinate is  bigger than xmax - r, so it will be setted to the standard value\n";
    xx = 0;
  }
  if(xx < xmin + r)
  {
    std::cout << "The x coordinate is smaller than xmax + r, so it will be setted to the standard value\n";
    xx = 0;
  }
  if(yy > ymax - r)
  {
    std::cout << "The y coordinate is  bigger than ymax - r, so it will be setted to the standard value\n";
    yy = 0;
  }
  if(yy < ymin + r)
  {
    std::cout << "The y coordinate is  smaller than ymin + r, so it will be setted to the standard value\n";
    yy = 0;
  }

  setPosition(xx, yy);
}


void Ball::step(double dt)
{
  double xp = x + vx * dt ;
  double yp = y + vy * dt - 0.5 * g * dt * dt ;
  if (xmin + r <= xp && xp <= xmax - r) {
    x = xp ;
  } else {
    vx = -vx ;
  }
  if (ymin + r <= yp && yp <= ymax - r) {
    y = yp ;
    vy = vy - g * dt ;
  } else {
    vy = -vy ;
  }
}

void Ball::display()
{
  std::cout<<x<<" "<<y<<std::endl ;
}
// Método para setar a posição
void Ball::setPosition(double xx, double yy)
{
  x = xx;
  y = yy;
}
// Método para mostrar a posição
void Ball::getPosition()
{
  std::cout << x << ' ' << y << std::endl;
}