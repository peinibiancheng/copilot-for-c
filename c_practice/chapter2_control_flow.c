#include <stdio.h>

/*
 * 练习 2.1: 判断奇偶数
 * 题目: 输入一个整数，判断它是奇数还是偶数。
 */
void check_even_odd(int num) {
    if (num % 2 == 0) {
        printf("%d 是偶数\n", num);
    } else {
        printf("%d 是奇数\n", num);
    }
}

/*
 * 练习 2.2: 找出三个数中的最大值
 * 题目: 输入三个整数，找出并输出其中的最大值。
 */
void max_of_three(int a, int b, int c) {
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    printf("%d, %d, %d 中的最大值是: %d\n", a, b, c, max);
}

/*
 * 练习 2.3: 判断闰年
 * 题目: 输入一个年份，判断是否为闰年。
 * 规则: 能被4整除但不能被100整除，或者能被400整除。
 */
void check_leap_year(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d 是闰年\n", year);
    } else {
        printf("%d 不是闰年\n", year);
    }
}

/*
 * 练习 2.4: 打印乘法口诀表
 * 题目: 使用嵌套循环打印 9x9 乘法口诀表。
 */
void multiplication_table() {
    int i, j;
    printf("--- 9x9 乘法表 ---\n");
    for (i = 1; i <= 9; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d*%d=%-2d ", j, i, i * j);
        }
        printf("\n");
    }
}

/*
 * 练习 2.5: 简单的计算器
 * 题目: 使用 switch 语句实现简单的加减乘除计算器。
 */
void simple_calculator(double n1, double n2, char op) {
    switch (op) {
        case '+':
            printf("%.1lf + %.1lf = %.1lf\n", n1, n2, n1 + n2);
            break;
        case '-':
            printf("%.1lf - %.1lf = %.1lf\n", n1, n2, n1 - n2);
            break;
        case '*':
            printf("%.1lf * %.1lf = %.1lf\n", n1, n2, n1 * n2);
            break;
        case '/':
            if (n2 != 0)
                printf("%.1lf / %.1lf = %.1lf\n", n1, n2, n1 / n2);
            else
                printf("错误: 除数不能为零\n");
            break;
        default:
            printf("错误: 无效的运算符\n");
    }
}

int main() {
    printf("=== 第二章: 控制流 ===\n");
    check_even_odd(7);
    max_of_three(10, 5, 20);
    check_leap_year(2024);
    multiplication_table();
    simple_calculator(10, 5, '/');
    return 0;
}
