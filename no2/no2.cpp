#include <iostream>

int main()
{
    int n;
    std::cout << "請輸入一個正整數: ";
    std::cin >> n;

    // 使用 for 迴圈
    int sum_for = 0;
    for (int i = 2; i <= n; i += 2) {
        sum_for += i;
    }
    std::cout << "使用 for 迴圈計算的偶數和: " << sum_for << std::endl;

    // 使用 while 迴圈
    int sum_while = 0;
    int i = 2;
    while (i <= n) {
        sum_while += i;
        i += 2;
    }
    std::cout << "使用 while 迴圈計算的偶數和: " << sum_while << std::endl;

    // 使用 do-while 迴圈
    int sum_do_while = 0;
    i = 2;
    do {
        if (i > n) break;
        sum_do_while += i;
        i += 2;
    } while (i <= n);
    std::cout << "使用 do-while 迴圈計算的偶數和: " << sum_do_while << std::endl;

    return 0;
}