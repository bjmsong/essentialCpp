#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int max(int v1, int v2)
{
    return v1 > v2 ? v1 : v2;
}

float max(float v1, float v2)
{
    return v1 > v2 ? v1 : v2;
}

string max(string v1, string v2)
{
    return v1 > v2 ? v1 : v2;
}

int max(const vector<int> &vec)
{
    return *max_element(vec.begin(), vec.end());
}

float max(const vector<float> &vec)
{
    return *max_element(vec.begin(), vec.end());
}

string max(const vector<string> &vec)
{
    return *max_element(vec.begin(), vec.end());
}

int max(const int *vec, int size)
{
    return *max_element(vec, vec+size);
}

float max(const float *vec, int size)
{
    return *max_element(vec, vec+size);
}

string max(const string *vec, int size)
{
    return *max_element(vec, vec+size);
}

int main()
{
    cout << max(1, 5) << endl;
    cout << max(1.5, 2.5) << endl;
    cout << max("abc", "abd") << endl;
    cout << "--------------" << endl;

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
