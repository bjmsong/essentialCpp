#include <iostream>
#include <vector>
using namespace std;

const vector<int> *pentagonal(int vec_num)
{
    static vector<int> elems;
    if (vec_num <= 0 || vec_num * (3 * vec_num - 1) / 2 > INT_MAX)
        return 0;
    for (int i = 0; i < vec_num; i++)
    {
        int val = (i+1) * (3 * (i + 1) - 1) / 2;
        elems.push_back(val);
    }

    return &elems;
}

template <typename elemType>
void display(const vector<elemType> &vec, string type)
{
    for (int i = 0; i < vec.size(); i++)
        cout << vec[i] << endl;
}

int main()
{
    int vec_num = 3;
    cout << "Please set the number of vector: " << endl;
    cin >> vec_num;
    const vector<int> *p = pentagonal(vec_num);
    if (!p)
    {
        cout << "Invalid number of vector !" << endl;
        return 1;
    }
    display(*p, "int");
}
