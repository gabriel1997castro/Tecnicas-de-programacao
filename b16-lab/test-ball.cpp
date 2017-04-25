/** file: test-ball.cpp
 ** brief: Tests the bouncing ball simulation
 ** author: Andrea Vedaldi
 **/

#include "ball.h"
#include <iostream>
const double dt = 1.0/30 ;

// Função da questão 6 Task 10
 void run(Simulation & ball, double dt) {
   for (int i = 0 ; i < 100 ; ++i) 
   	{ ball.step(dt) ; ball.display() ; }
 }

int main(int argc, char** argv)
{
  Ball ball ;

  run(ball, dt);
  return 0 ;
}