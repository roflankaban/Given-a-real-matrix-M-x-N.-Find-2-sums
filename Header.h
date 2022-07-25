#pragma once
#include <iostream>
using namespace std;
//#ifndef _MYCLASS_H
//#define _MYCLASS_H
class Carray {
	float *sarray; // координаты точки
	int N, M;
public:
	Carray(const int N, const int M);
	int Max_line(const int N, const int M);
	int Min_columns(const int N, const int M);



	//явный деструктор
	~Carray();
};
//#endif //_MYCLASS_H#pragma once
