#include <iostream>
#include <cmath>
#ifndef _GEOMETRY_H
#define _GEOMETRY_H
using namespace std;

// Описываем точки и треугольники в этом классе, чтобы потом реализовать поиск
class Point {
public:
    double x, y;
    Point();
    Point(double _x, double _y);
};

class Triangle {
public:
    Point vertexes[3];
    double area;
};

// Расстояние между двумя точками по их координатам
double calculateDistance(const Point& pa, const Point& pb);

// Площадь треугольника
double calculateTriangleArea(Triangle &tr);

// Еще функция с площадбю только по формуле Герона
double calculateAreaBySides(double a, double b, double c);

// Сравнение площадей
bool operator <=(const Triangle& tr1, const Triangle& tr2);

// Функции очистки
void deletePoint(Point& p);
void deleteTriangle(Triangle& tr);

#endif