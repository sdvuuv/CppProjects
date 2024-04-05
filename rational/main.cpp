#include "rational.h"

int main(int argc, char const *argv[])
{

    // Взяла для тестирования последний пример из презетации из лекции
    Rational a(1, 2), b(-1, 6);

    cout << "a=" << a << " b=" << b << " a+b=" << a + b << endl;
    cout << "a(" << a << ") *= b(" << b << ")" << endl;
    a *= b;
    cout << "a=" << a << " b=" << b << " a-b=" << a - b << endl;


    Rational c = 3;

    cout << "b=" << b << " c=" << c << " b/c=" << b / c << endl;
    
    return 0;
}