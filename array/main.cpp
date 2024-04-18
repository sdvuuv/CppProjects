#include <iostream>
#include <time.h>
#include <fstream>
#include "array.h"
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
    Array arr(N);
    int index = 0;

    for (int i = 1; i <= N; i++)
        arr.insert(i);

    while (arr.getSize() > 1)
    {
        index = (index + k - 1) % arr.getSize();
        arr.remove(index);
    }
    return arr[0];
}
int main()
{
    setlocale(LC_ALL, "Russian");
    time_t start, end, diff;

    int arrN[8] = {1000, 5000, 10000, 50000, 100000, 500000, 1000000, 2000000};
    int k = 2;
    for (int i = 0; i < 8; i++)
    {
        time(&start);
        int a = answer(arrN[i], k);
        time(&end);
        diff = end - start;

        cout << "N: " << arrN[i] << " | Survivor number: " << a << " | Time taken: " << diff << " seconds" << endl;
    }

    return 0;
}
