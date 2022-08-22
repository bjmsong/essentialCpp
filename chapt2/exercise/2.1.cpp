#include <iostream>
using namespace std;

const int MAX_SIZE = 1024;

bool fibon_elem(int , int &);

bool fibon_elem(int pos, int &elem)
{
    if (pos <=0 || pos > MAX_SIZE)
    {
        elem = 0;
        return false;
    }

    elem = 1;
    int n_2 = 1, n_1 = 1;
    for (int ix = 3; ix<= pos; ++ix)
    {
        elem = n_2 + n_1;
        n_2 = n_1;
        n_1 = elem;
    }

    return true;
}


int main()
{
    int pos ;
    cout << "Please enter a position: ";
    while (cin >> pos)
    {
        int elem;
        if (fibon_elem(pos, elem))
            cout << "element # " << pos << " is " << elem <<endl;
        else
            cout << "Sorry, could not calculate element # " << pos << endl;
    }
}