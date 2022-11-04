# include <iostream>
# include <vector>
using namespace std;

// 使用vector
int main()
{
    vector<int> seq;
    int num;
    cout << "Please enter a list of numbers: ";
    while (cin >> num)
        seq.push_back(num);
    int sum = 0;
    for (int ix=0; ix<seq.size(); ++ix)
        sum += seq[ix];
    cout << "The sum is: " << sum << " the average is: " << (float)sum/seq.size() << endl;
}
