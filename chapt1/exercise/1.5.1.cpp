# include <iostream>
# include <string>
using namespace std;

int main()
{
    string user_name;
    cout << "Please enter your first name: ";
    cin >> user_name;
    if (user_name.size() > 2)
        cout << '\n' << "Hello, " << user_name << endl;
    else
        cout << "Invalid name!" << endl;
}
