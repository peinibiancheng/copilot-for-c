#include <stdio.h>
#include <string.h>

/*
 * 练习 9.1: 字符串长度
 * 编写一个函数计算字符串的长度（不使用 strlen）。
 */
int my_strlen(char *str) {
    // 在这里编写代码
    return 0;
}

/*
 * 练习 9.2: 字符串复制
 * 编写一个函数将源字符串复制到目标字符串（不使用 strcpy）。
 */
void my_strcpy(char *dest, char *src) {
    // 在这里编写代码
}

/*
 * 练习 9.3: 回文检查
 * 检查一个字符串是否是回文（正读和反读都一样）。
 */
int is_palindrome(char *str) {
    // 在这里编写代码
    return 0;
}

int main() {
    char s1[] = "Hello";
    char s2[20];
    char s3[] = "madam";

    printf("--- 练习 9.1 ---\n");
    printf("Length of '%s': %d\n", s1, my_strlen(s1));

    printf("\n--- 练习 9.2 ---\n");
    my_strcpy(s2, s1);
    printf("Copied string: %s\n", s2);

    printf("\n--- 练习 9.3 ---\n");
    printf("Is '%s' palindrome? %d\n", s1, is_palindrome(s1));
    printf("Is '%s' palindrome? %d\n", s3, is_palindrome(s3));

    return 0;
}
