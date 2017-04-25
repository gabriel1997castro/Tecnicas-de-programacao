# Tecnicas-de-programacao-simulador-fisico
Este programa tem como objetivo simular e mostrar graficamente o comportamento de uma bola no com certa velocidade inicial,
com ação da gravidade da Terra e com conservação de energia.
## Requisitos
É necessário uma máquina com o compilador de C++, o G++, ou equivalente. Além disso é necessário os pacotes do C++ na sua 
décima primeira versão. Para a visualização gráfica seria necessário Matlab,Octave ou equivalente.
## Linha de compilação usada
 g++ -std=c++11 -g ball.cpp test-ball.cpp.
## O que cada arquivo faz?
Há quatro arquivos principais:                                                                                                  
ball.h        ---  Contém a classe ball, seus atributos e os protótipos dos métodos.                                                                            
ball.cpp      ---  Contém a implementação da classe ball com seus métodos.                                                                                    
simulation.h  ---  Contém a class abstrata simulation que contém os métodos step e display.                                                    
test-ball.cpp ---  Contém a função main e a função run que roda 100 vezes a função step junto a display mostrando 100 passos da bola.
