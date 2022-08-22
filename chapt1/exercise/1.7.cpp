#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ifstream infile("1_7.txt");
    vector<string> val;
    if (!infile)
    {
        cout << "open file failed" << endl;
        return 1;
    }

    ofstream outfile("1_7_out.txt");
    if (!outfile)
    {
        cout << "open file failed" << endl;
        return 1;
    }

    string word;
    while (infile >> word)
        val.push_back(word);
    for (int i = 0; i < val.size(); i++)
        cout << val[i] << endl;

    sort(val.begin(), val.end());

    for (int i = 0; i < val.size(); i++)
        outfile << val[i] << endl;
}
