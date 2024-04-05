#include "../Geometry/geometry.h"
#include <iostream>
#ifndef _FILE_H
#define _FILE_H
using namespace std;

// Подсчет числа точек во входном файле
int countPoints(const char *fileName);

// Чтение точек из входного файла
bool inPoints(const char *fileName, Point *pointArray, int maxPointNum);

// Вывод треугольников в выходной файл
bool outTriangles(const char *fileName, const Triangle *trArray, int trNum);

// ввод
istream &operator>>(istream &in, Point &p);

// вывод
ostream &operator<<(ostream &out, const Point &p);
ostream &operator<<(ostream &out, const Triangle &tr);

#endif