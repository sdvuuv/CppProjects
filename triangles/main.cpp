#include <iostream>
#include <locale.h>
#include "Geometry/geometry.h"
#include "Searching/search.h"
#include "FileProcessing/file.h"

using namespace std;

int main()
{
  setlocale(LC_ALL, "Russian");

  char *inFileName = new char[256];
  char *outFileName = new char[256];

  // у меня чтобы запустилось надо было писать ../1.txt как имя входного файла не знаю как на винде будет запускаться

  cout << "Введите имя входного файла: ";
  cin.getline(inFileName, 256);
  // Файл с ответом в папке build находится
  cout << "Введите имя выходного файла: ";
  cin.getline(outFileName, 256);

  int pointNum = countPoints(inFileName);
  if (pointNum < 0)
  {
    cout << "Входной файл не существует" << endl;
    return -2;
  }

  Point *pointArray = new Point[pointNum];

  if (!inPoints(inFileName, pointArray, pointNum))
  {
    cout << "Точки не читаются" << endl;
    return -3;
  }

  const int maxTrNum = 3;
  Triangle trArray[maxTrNum];

  searchMaxArea(pointArray, pointNum, trArray, maxTrNum);
 
  cout << "Файл с ответом создан" << endl;
  delete[] pointArray;
  delete[] inFileName;
  delete[] outFileName;
  return 0;
}