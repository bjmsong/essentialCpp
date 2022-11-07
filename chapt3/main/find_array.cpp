#include <iostream>
#include <vector>
using namespace std;

// find算法应用在array容器上的实现

// 实现一
template <typename elemType>
elemType* find(elemType *array, int size, const elemType &value)
{
    if (!array || size < 1)
        return 0;
    for (int ix = 0; ix < size; ++ix)
        if (array[ix] == value)
            return &array[ix];
    return 0;
}

// 实现二
template <typename elemType>
elemType* find(elemType *first, elemType *last, elemType &value)
{
    if (!first || !last)
        return 0;
    for (; first != last; ++first)
        if (*first == value)
            return first;
    return 0;
}


int main()
{
    int a[4] = {1, 2, 3, 4};
    if (find(a, 4, 100))
        cout << "find the value" << endl;
    else
        cout << "can't find the value" << endl;

    if (find(a, 4, 3))
        cout << "find the value" << endl;
    else
        cout << "can't find the value" << endl;

    // 会报错
    int v = 100;
    if (find(a, a + 4, v))
        cout << "find the value" << endl;
    else
        cout << "can't find the value" << endl;

    if (find(a, a + 4, a[3]))
        cout << "find the value" << endl;
    else
        cout << "can't find the value" << endl;
}