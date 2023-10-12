#pragma once
#include<stdio.h>
#include<math.h>
#include<stdbool.h>
int add(int a, int b);
int sub(int a, int b);
int div(int a, int b);
int time(int a, int b);
int opreation(int a, int b, int (*op)(int, int));
void square();
void squareAsterrisk(int side);
void squareAsterrisk2(int side);
void ComCal(float money);
void FloydTriangle(int num);
void BintoDel(int num);
