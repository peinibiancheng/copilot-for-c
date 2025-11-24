#include <stdio.h>

/*
 * 练习 5.1: 使用指针交换两个数
 * 题目: 编写一个函数，使用指针交换两个整数的值。
 */
void swap_pointers(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

/*
 * 练习 5.2: 使用指针计算数组元素之和
 * 题目: 使用指针遍历数组并计算所有元素的和。
 */
void sum_array_pointers(int *arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(arr + i);
    }
    printf("数组元素之和: %d\n", sum);
}

/*
 * 练习 5.3: 使用指针计算字符串长度
 * 题目: 不使用 strlen，使用指针计算字符串的长度。
 */
int string_length_pointer(char *str) {
    int length = 0;
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}

/*
 * 练习 5.4: 指针与数组反转
 * 题目: 使用指针反转数组。
 */
void reverse_array_pointer(int *arr, int size) {
    int *start = arr;
    int *end = arr + size - 1;
    int temp;
    
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    printf("=== 第五章: 指针 ===\n");
    
    int x = 10, y = 20;
    printf("交换前: x = %d, y = %d\n", x, y);
    swap_pointers(&x, &y);
    printf("交换后: x = %d, y = %d\n", x, y);
    
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    sum_array_pointers(arr, size);
    
    char str[] = "Pointer Magic";
    printf("字符串 \"%s\" 的长度是: %d\n", str, string_length_pointer(str));
    
    reverse_array_pointer(arr, size);
    printf("反转后的数组: ");
    for(int i=0; i<size; i++) printf("%d ", arr[i]);
    printf("\n");
    
    return 0;
}
