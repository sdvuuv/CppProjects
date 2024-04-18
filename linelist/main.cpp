#include <iostream>
#include <time.h>
#include <fstream>
#include "linelist.h"

#include <locale.h>
#define SIZE(x) (sizeof(x) / sizeof(int))

using namespace std;

/*
Пользователь вводит:
    • N – кол-во элементов контейнера;
    • k – шаг выбывания элементов из контейнера.
Элементы контейнера типа Array хранят последовательность целых чисел от 1 до N, см. рисунок 1.
Из контейнера последовательно удаляются элементы с шагом k, счет ведется с 1-го элемента.
Когда в контейнере останется один элемент программа возвращает его значение.
На рисунке 1 пошагово представлено состояния контейнера для случая, когда N = 13, k = 3.
Красным цветом выделен элемент, который согласно шагу k удаляется из массива.
В примере на рисунке 1 видно, что последним остается элемент с 13, что является решением задачи.
*/

int answer(int N, int k)
{
    LineList<int> list;
    // int index = 0;
    // list.insertFirst(1);
    LineListElem<int> *start = list.getStart();
    LineListElem<int> *prev = start;

    int counter = 1;
    for (int i = N; i > 0; i--)
    {

        list.insertFirst(i);
    }
    int last;
    return last;
    // Пока думаю как реализовать задачу Иосифа Флавия с указателями
}
int main()
{
    setlocale(LC_ALL, "Russian");
    time_t start, end, diff;

    int arrN[8] = {1000, 5000, 10000, 50000, 100000, 500000, 1000000, 2000000};
    int k = 2;
    for (int i = 0; i < 2; i++)
    {
        time(&start);
        int a = answer(arrN[i], k);
        time(&end);
        diff = end - start;

        cout << "N: " << arrN[i] << " | Survivor number: " << a << " | Time taken: " << diff << " seconds" << endl;
    }

    return 0;
}
