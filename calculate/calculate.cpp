// calculate.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;

bool CheckN(int n0,int x) {
    int n1, n2;
    int n = n0 + x;
    for (int i = 9; i > 1; i--) {
        if (n % i == 0 && i != x) {
            n1 = (n / i);
            for (int j = (i - 1); j > 1; j--) {
                if (j == i) {
                    return false;
                }
                else if (n1 % j == 0 && j != x) {
                    n2 = (n1 / j);
                    if (n2 < 10 && n2 != i && n2 != j && n2 != x) {
                        cout << n0 << " = " << n2 << "*" << j << "*" << i << "-" << x << endl;
                        return true;
                    }
                }
            }
        }
    }
    return false;
}

int main()
{
    int n,n1,n2;
    cout << "注意：仅适用于A=B*C*D-M的题型！" << endl;
    cout << "输入A的值" << endl;
    cin >> n;
    bool result = false;
    for (int i = 1; i <= 9; i++) {
        if (CheckN(n, i) || result) {
            result = true;
        }
    }
    if (!result) {
        cout << "No Result!" << endl;
    }
    return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
