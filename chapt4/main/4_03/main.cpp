#include "matrix.h"

int main()
{
    Matrix mat1(8, 4);
    {
        // 在大括号内声明的局部变量其作用域自变量声明始，到大括号之后终结
        Matrix mat2;
        mat2 = mat1;
    }

    cout << "Bye" << endl;
    return 0;
}