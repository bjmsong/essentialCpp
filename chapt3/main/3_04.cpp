#include <bits/stdc++.h>
using namespace std;

int main( )
{
    const int seq_size = 18;
    int elem_seq[seq_size] = {
        1, 2, 3,    // Fibonacci
        3, 4, 7,    // Lucas
        2, 5, 12,   // Pell
        3, 6, 10,   // Triangular
        4, 9, 16,   // Square
        5, 12, 22   // Pentagonal
    };
    vector<int> fibonacci(elem_seq, elem_seq+3);
    vector<int> Pell(elem_seq+6, elem_seq+9);
    vector<int> fib_plus_pell(3);   // 容器大小为3
    
    // 二元转换:对两个容器给定范围内的每个元素做二元运算后放在另一个容器里。涉及两个参与转换运算容器
    // 有5个参数，前2个指定参与转换的第1个容器的起止范围，第3个参数是转换的第2个容器的起始位置,
    // 第4个参数是结果存放容器的起始位置，第5个参数是二元运算。

    transform(fibonacci.begin(), fibonacci.end(),
            Pell.begin(), fib_plus_pell.begin(), plus<int>());
    
    for (int index = 0; index < fib_plus_pell.size(); index++)
        cout << fib_plus_pell[index] << " ";
    cout << endl;
  
    return 0;
}

