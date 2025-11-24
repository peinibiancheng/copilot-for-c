#include <stdio.h>

/*
 * 练习 10.1: 定义结构体
 * 定义一个表示学生的结构体 (姓名, 年龄, 分数)，并初始化一个实例。
 */
struct Student {
    char name[50];
    int age;
    float score;
};

void print_student(struct Student s) {
    // 在这里编写代码
}

/*
 * 练习 10.2: 结构体数组
 * 创建一个包含 3 个学生的数组，并打印分数最高的学生信息。
 */
void find_top_student(struct Student students[], int size) {
    // 在这里编写代码
}

int main() {
    struct Student s1 = {"Alice", 20, 85.5};
    
    printf("--- 练习 10.1 ---\n");
    print_student(s1);

    printf("\n--- 练习 10.2 ---\n");
    struct Student class_a[] = {
        {"Alice", 20, 85.5},
        {"Bob", 21, 92.0},
        {"Charlie", 19, 78.5}
    };
    find_top_student(class_a, 3);

    return 0;
}
