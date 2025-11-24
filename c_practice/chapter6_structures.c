#include <stdio.h>
#include <string.h>

/*
 * 练习 6.1: 学生信息结构体
 * 题目: 定义一个学生结构体（包含姓名、学号、分数），输入并显示学生信息。
 */
struct Student {
    char name[50];
    int roll;
    float marks;
};

void display_student(struct Student s) {
    printf("学生信息:\n");
    printf("姓名: %s\n", s.name);
    printf("学号: %d\n", s.roll);
    printf("分数: %.2f\n", s.marks);
}

/*
 * 练习 6.2: 复数加法
 * 题目: 使用结构体表示复数，并编写函数计算两个复数的和。
 */
typedef struct {
    float real;
    float imag;
} Complex;

Complex add_complex(Complex c1, Complex c2) {
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
}

/*
 * 练习 6.3: 计算两点之间的距离
 * 题目: 定义一个点结构体，计算两个点之间的欧几里得距离。
 */
#include <math.h>

struct Point {
    int x;
    int y;
};

double distance(struct Point p1, struct Point p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

int main() {
    printf("=== 第六章: 结构体 ===\n");
    
    struct Student s1;
    strcpy(s1.name, "Zhang San");
    s1.roll = 101;
    s1.marks = 92.5;
    display_student(s1);
    
    Complex n1 = {2.5, 3.5};
    Complex n2 = {1.5, 4.5};
    Complex sum = add_complex(n1, n2);
    printf("复数和: %.1f + %.1fi\n", sum.real, sum.imag);
    
    struct Point p1 = {0, 0};
    struct Point p2 = {3, 4};
    printf("点 (0,0) 和 (3,4) 之间的距离: %.2f\n", distance(p1, p2));
    
    return 0;
}
