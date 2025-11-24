#include <stdio.h>

/*
 * 练习 4.1: 奇偶判断
 * 使用 if-else 判断一个数是奇数还是偶数。
 */
void check_odd_even(int num) {
    // 在这里编写代码
}

/*
 * 练习 4.2: 最大值
 * 编写程序找出三个数中的最大值。
 */
void find_max_of_three(int a, int b, int c) {
    // 在这里编写代码
}

/*
 * 练习 4.3: 简单的计算器
 * 使用 switch 语句实现一个简单的计算器 (+, -, *, /)。
 */
void simple_calculator(double num1, double num2, char op) {
    // 在这里编写代码
}

int main() {
    printf("--- 练习 4.1 ---\n");
    check_odd_even(7);
    check_odd_even(10);

    printf("\n--- 练习 4.2 ---\n");
    find_max_of_three(10, 5, 8);

    printf("\n--- 练习 4.3 ---\n");
    simple_calculator(10, 5, '+');
    simple_calculator(10, 0, '/');

    return 0;
}
