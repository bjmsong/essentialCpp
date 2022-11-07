#include "fibonacci.h"

// 重载iostream运算符
ostream & operator<<(ostream &os, const num_sequence &ns)
{
    return ns.print(os);
}
int main()
{
    Fibonacci fib;

    cout << fib << endl;

    Fibonacci fib2(16);
    cout << fib2 << endl;

    Fibonacci fib3(8, 12);
    cout << fib3 << endl;
    return 0;
}