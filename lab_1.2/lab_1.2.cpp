#include <iostream>
#include "Matrix.h"

using namespace std;

int main()
{
    Matrix m;
    m.Init(10, 5);
    m.display();
    cout << endl;
    cout << m.getValueByIndex(6, 3) << endl;
    cout << endl;
    m.multiplyMatrixByNumber(4);
    m.display();
}
