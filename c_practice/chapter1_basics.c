#include <stdio.h>

/*
 * 练习 1.1: Hello World
 * 题目: 编写一个程序，在屏幕上打印 "Hello, World!"。
 */
void print_hello() {
    printf("Hello, World!\n");
}

/*
 * 练习 1.2: 变量交换
 * 题目: 编写一个程序，交换两个整数变量的值（不使用临时变量）。
 */
void swap_no_temp() {
    int a = 5, b = 10;
    printf("交换前: a = %d, b = %d\n", a, b);
    
    a = a + b;
    b = a - b;
    a = a - b;
    
    printf("交换后: a = %d, b = %d\n", a, b);
}

/*
 * 练习 1.3: 温度转换
 * 题目: 编写一个程序，将华氏温度转换为摄氏温度。
 * 公式: C = (F - 32) * 5 / 9
 */
void fahrenheit_to_celsius() {
    float fahrenheit, celsius;
    fahrenheit = 98.6;
    
    celsius = (fahrenheit - 32) * 5 / 9;
    
    printf("%.2f 华氏度 = %.2f 摄氏度\n", fahrenheit, celsius);
}

/*
 * 练习 1.4: 计算圆的面积和周长
 * 题目: 输入圆的半径，计算并输出圆的面积和周长。
 */
void circle_calc() {
    float radius = 5.0;
    float area, perimeter;
    const float PI = 3.14159;
    
    area = PI * radius * radius;
    perimeter = 2 * PI * radius;
    
    printf("半径: %.2f, 面积: %.2f, 周长: %.2f\n", radius, area, perimeter);
}

int main() {
    printf("=== 第一章: 基础语法 ===\n");
    print_hello();
    swap_no_temp();
    fahrenheit_to_celsius();
    circle_calc();
    return 0;
}
