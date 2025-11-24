#include <stdio.h>

/*
 * 练习 7.1: 数组求和
 * 计算整数数组中所有元素的和。
 */
int sum_array(int arr[], int size) {
    // 在这里编写代码
    return 0;
}

/*
 * 练习 7.2: 查找最大值
 * 找出数组中的最大元素。
 */
int find_max(int arr[], int size) {
    // 在这里编写代码
    return 0;
}

/*
 * 练习 7.3: 数组反转
 * 原地反转一个数组。
 */
void reverse_array(int arr[], int size) {
    // 在这里编写代码
}

void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 5, 3, 9, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("--- 练习 7.1 ---\n");
    printf("Sum: %d\n", sum_array(arr, size));

    printf("\n--- 练习 7.2 ---\n");
    printf("Max: %d\n", find_max(arr, size));

    printf("\n--- 练习 7.3 ---\n");
    reverse_array(arr, size);
    print_array(arr, size);

    return 0;
}
