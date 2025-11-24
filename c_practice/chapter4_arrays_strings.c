#include <stdio.h>
#include <string.h>

/*
 * 练习 4.1: 数组最大值和最小值
 * 题目: 找出数组中的最大值和最小值。
 */
void find_min_max(int arr[], int size) {
    int min = arr[0];
    int max = arr[0];
    
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }
    printf("数组最大值: %d, 最小值: %d\n", max, min);
}

/*
 * 练习 4.2: 数组反转
 * 题目: 将一个数组中的元素顺序颠倒。
 */
void reverse_array(int arr[], int size) {
    int temp;
    for (int i = 0; i < size / 2; i++) {
        temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
    
    printf("反转后的数组: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

/*
 * 练习 4.3: 统计字符串中的元音和辅音
 * 题目: 统计一个字符串中元音和辅音的个数。
 */
void count_vowels_consonants(char str[]) {
    int vowels = 0, consonants = 0;
    for (int i = 0; str[i] != '\0'; ++i) {
        char ch = str[i];
        // 简单的检查，假设输入只包含字母
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowels++;
        } else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            consonants++;
        }
    }
    printf("字符串: \"%s\"\n", str);
    printf("元音: %d, 辅音: %d\n", vowels, consonants);
}

/*
 * 练习 4.4: 判断回文字符串
 * 题目: 判断一个字符串是否是回文（正读和反读都一样）。
 */
void check_palindrome(char str[]) {
    int l = 0;
    int h = strlen(str) - 1;
    int is_palindrome = 1;
    
    while (h > l) {
        if (str[l++] != str[h--]) {
            is_palindrome = 0;
            break;
        }
    }
    
    if (is_palindrome)
        printf("\"%s\" 是回文字符串\n", str);
    else
        printf("\"%s\" 不是回文字符串\n", str);
}

int main() {
    printf("=== 第四章: 数组与字符串 ===\n");
    
    int arr[] = {12, 45, 2, 19, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    find_min_max(arr, size);
    reverse_array(arr, size);
    
    char str[] = "Hello World";
    count_vowels_consonants(str);
    
    check_palindrome("madam");
    check_palindrome("hello");
    
    return 0;
}
