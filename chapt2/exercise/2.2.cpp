#include <iostream>
#include <vector>
using namespace std;

bool pentagonal(vector<int> &vec, int vec_len)
{
    if (vec_len<=0 || vec_len*(3*vec_len-1)/2>)
        return false;
    for(int i=0; i<vec_len; i++)
        vec[i] = i*(3*i-1)/2;
    
    return true;
}

int main()
{
    int vec_len;
    cout << "Please set the number of vector: " << endl;
    cin >> vec_len;
    vector<int> vec;
    if (!pentagonal(vec, vec_len))
    {
       cout << "Invalid number of vector !" << endl;
       return 1;  
    }

}
