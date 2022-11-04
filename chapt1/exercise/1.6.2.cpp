# include <iostream>
using namespace std;

// 使用array
int main()
{
    const int seq_size = 100;
    int seq[seq_size];
    int num, length = 0;
    // for(int i = 0;i<10;++i){
    
    // seq[i] = i;
    // cout<<i<<endl;

    // }
    cout << "Please enter a list of numbers: ";
    while ((length<seq_size) && (cin >> num))
        seq[length++] = num;
    int sum = 0;
    for (int ix=0; ix<length; ++ix)
        sum += seq[ix];
    cout << "The sum is: " << sum << " the average is: " << (float)sum/length << endl;
}
