#include <iostream>
#include <vector>
using namespace std;

inline bool check_vec_number(int vec_num)
{
    if (vec_num <= 0 || vec_num * (3 * vec_num - 1) / 2 > INT_MAX)
        return false;
    else
        return true;
}
bool pentagonal(vector<int> &vec, int vec_num)
{
    if (!check_vec_number(vec_num))
        return false;
    for (int i = 0; i < vec_num; i++)
    {
        int val = (i+1) * (3 * (i + 1) - 1) / 2;
        vec.push_back(val);
    }

    return true;
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
    vector<int> vec;
    if (!pentagonal(vec, vec_num))
    {
        cout << "Invalid number of vector !" << endl;
        return 1;
    }
    display(vec, "int");
}
