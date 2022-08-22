#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> &vec)
{
    cout << "display: ";
    for (int ix = 0; ix < vec.size(); ++ix)
        cout << vec[ix] << ' ';
    cout << endl;
}

vector<int> *fibon_seq(int size)
{
    const int max_size = 1024;
    static vector<int> elems;
    if (size < 0 || size > max_size)
    {
        cout << "opps: invalid size" << endl;
        return 0;
    }

    for (int ix = elems.size(); ix < size; ++ix)
    {
        if (ix == 0 || ix == 1)
            elems.push_back(1);
        else
            elems.push_back(elems[ix - 1] + elems[ix - 2]);
    }
    display(elems);

    return &elems; // 返回局部静态变量的地址
}

int main()
{
    int pos;
    vector<int> *p;
    cout << "Please enter a position: ";
    while (cin >> pos)
    {
        p = fibon_seq(pos);
        if (p != 0)
            cout << "element # " << pos << " is " << (*p)[pos-1] << endl;
        else
            cout << "Sorry, could not calculate element # " << pos << endl;
    }
}