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


## Valores gerados com posição inicial padrão (x = 0 e y = 0):
1 - Saída gerada

0.01 -0.00877778                                                                 
0.02 -0.0284444                                                                                  
0.03 -0.059                                                                                               
0.04 -0.100444                                                                                                       
0.05 -0.152778                                                                                                       
0.06 -0.216                                                                                               
0.07 -0.290111                                                                                               
0.08 -0.375111                                                                                               
0.09 -0.471                                                                                               
0.1 -0.577778                                                                                                              
0.11 -0.695444                                                                                               
0.12 -0.824                                                                                               
0.13 -0.824                                                                                               
0.14 -0.695444                                                                                               
0.15 -0.577778                                                                                               
0.16 -0.471                                                                                               
0.17 -0.375111                                                                                               
0.18 -0.290111                                                                                               
0.19 -0.216                                                                                               
0.2 -0.152778                                                                                               
0.21 -0.100444                                                                                               
0.22 -0.059                                                                                               
0.23 -0.0284444                                                                                               
0.24 -0.00877778                                                                                               
0.25 -8.1532e-17                                                                                               
0.26 -0.00211111                                                                                               
0.27 -0.0151111                                                                                               
0.28 -0.039                                                                                               
0.29 -0.0737778                                                                                               
0.3 -0.119444                                                                                               
0.31 -0.176                                                                                               
0.32 -0.243444                                                                                               
0.33 -0.321778                                                                                               
0.34 -0.411                                                                                               
0.35 -0.511111                                                                                               
0.36 -0.622111                                                                                               
0.37 -0.744                                                                                               
0.38 -0.876778                                                                                               
0.39 -0.876778                                                                                               
0.4 -0.744                                                                                               
0.41 -0.622111                                                                                               
0.42 -0.511111                                                                                               
0.43 -0.411                                                                                                               
0.44 -0.321778                                                                                               
0.45 -0.243444                                                                                               
0.46 -0.176                                                                                               
0.47 -0.119444                                                                                               
0.48 -0.0737778                                                                                               
0.49 -0.039                                                                                               
0.5 -0.0151111                                                                                               
0.51 -0.00211111                                                                                               
0.52 -4.90059e-16                                                                                               
0.53 -0.00877778                                                                                               
0.54 -0.0284444                                                                                               
0.55 -0.059                                                                                               
0.56 -0.100444                                                                                               
0.57 -0.152778                                                                                               
0.58 -0.216                                                                                               
0.59 -0.290111                                                                                               
0.6 -0.375111                                                                                               
0.61 -0.471                                                                                               
0.62 -0.577778                                                                                               
0.63 -0.695444                                                                                                     
0.64 -0.824                                                                                               
0.65 -0.824                                                                                               
0.66 -0.695444                                                                                               
0.67 -0.577778                                                                                               
0.68 -0.471                                                                                               
0.69 -0.375111                                                                                               
0.7 -0.290111                                                                                               
0.71 -0.216                                                                                               
0.72 -0.152778                                                                                               
0.73 -0.100444                                                                                               
0.74 -0.059                                                                                               
0.75 -0.0284444                                                                                               
0.76 -0.00877778                                                                                               
0.77 -7.47666e-16                                                                                               
0.78 -0.00211111                                                                                               
0.79 -0.0151111                                                                                               
0.8 -0.039                                                                                               
0.81 -0.0737778                                                                                               
0.82 -0.119444                                                                                               
0.83 -0.176                                                                                               
0.84 -0.243444                                                                                               
0.85 -0.321778                                                                                               
0.86 -0.411                                                                                               
0.87 -0.511111                                                                                               
0.88 -0.622111                                                                                               
0.89 -0.744                                                                                               
0.89 -0.876778                                                                                               
0.88 -0.876778                                                                                               
0.87 -0.744                                                                                               
0.86 -0.622111                                                                                               
0.85 -0.511111                                                                                               
0.84 -0.411                                                                                               
0.83 -0.321778                                                                                               
0.82 -0.243444                                                                                               
0.81 -0.176                                                                                               
0.8 -0.119444                                                                                               
0.79 -0.0737778                                                                                               
 
 
 ## Gráfico da posição para os valores acima:
 /home/gabriel/Desktop/tecnicas de programacao/b16-lab/Grafico_posicao_X_Y
