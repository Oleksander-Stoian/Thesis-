#pragma once
#include <string>

using namespace System;

void addY(double x1, double x2, double t,int exp);
void addU(double x1, double x2, double t,int exp);
void start(int l,int m,int exp,int num);
void giveMat(double** matC, double** matG);
double compare();
void mult(double** x, double n, double m, double** y, double** res);
//double equationsL(double& t, double& x1_sl, double& x2_sl, double x1_sm, double x2_sm);
