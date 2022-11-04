# include <iostream>
using namespace std;

// 使用C-style字符串
int main()
{
    char user_name[] = {'a'};
    cout << "Please enter your first name: ";
    cin >> user_name;
    if (strlen(user_name) > 2)
        cout << '\n' << "Hello, " << user_name << endl;
    else
        cout << "Invalid name!" << endl;
}
