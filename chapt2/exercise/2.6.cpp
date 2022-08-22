#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;


template <typename elemType>
elemType max(const vector<elemType> &vec)
{
    return *max_element(vec.begin(), vec.end());
}

template <typename arrayType>
arrayType max(const arrayType *vec, int size)
{
    return *max_element(vec, vec+size);
}


int main()
{
    int v[5] = {2, 4, 5, 6, 1};
    vector<int> vec(v, v + 5);
    float fv[5] = {2.0, 4.0, 5.0, 6.0, 1.0};
    vector<float> fvec(fv, fv + 5);
    string sv[5] = {"abc", "ade", "edd", "www", "wde"};
    vector<string> svec(sv, sv + 5);

    cout << max(vec) << endl;
    cout << max(fvec) << endl;
    cout << max(svec) << endl;
    cout << "--------------" << endl;

    cout << max(v, 5) << endl;
    cout << max(fv, 5) << endl;
    cout << max(sv, 5) << endl;
}
