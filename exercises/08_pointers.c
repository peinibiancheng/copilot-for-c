#include <stdio.h>

/*
 * 练习 8.1: 指针基础
 * 声明一个整型变量，使用指针打印它的地址和值。
 */
void pointer_basics() {
    // 在这里编写代码
}

/*
 * 练习 8.2: 使用指针交换变量
 * 编写一个函数 swap，使用指针交换两个整数的值。
 */
void swap(int *a, int *b) {
    // 在这里编写代码
}

/*
 * 练习 8.3: 指针与数组
 * 使用指针遍历并打印数组元素。
 */
void print_array_with_pointers(int *arr, int size) {
    // 在这里编写代码
}

int main() {
    printf("--- 练习 8.1 ---\n");
    pointer_basics();

    printf("\n--- 练习 8.2 ---\n");
    int x = 10, y = 20;
    printf("Before swap: x=%d, y=%d\n", x, y);
    swap(&x, &y);
    printf("After swap: x=%d, y=%d\n", x, y);

    printf("\n--- 练习 8.3 ---\n");
    int arr[] = {10, 20, 30, 40};
    print_array_with_pointers(arr, 4);

    return 0;
}
