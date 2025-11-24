#include <stdio.h>
#include <math.h>

/*
 * 练习 3.1: 计算阶乘 (递归)
 * 题目: 编写一个递归函数计算 n 的阶乘。
 */
long long factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

/*
 * 练习 3.2: 斐波那契数列
 * 题目: 编写一个函数，输出斐波那契数列的前 n 项。
 */
void print_fibonacci(int n) {
    int t1 = 0, t2 = 1, nextTerm;
    printf("斐波那契数列 (%d 项): ", n);
    
    for (int i = 1; i <= n; ++i) {
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n");
}

/*
 * 练习 3.3: 判断素数
 * 题目: 编写一个函数判断一个数是否为素数。
 */
int is_prime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

/*
 * 练习 3.4: 最大公约数 (GCD)
 * 题目: 编写一个函数计算两个数的最大公约数。
 */
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    printf("=== 第三章: 函数 ===\n");
    
    int n = 5;
    printf("%d 的阶乘是: %lld\n", n, factorial(n));
    
    print_fibonacci(7);
    
    int p = 17;
    if (is_prime(p)) printf("%d 是素数\n", p);
    else printf("%d 不是素数\n", p);
    
    int a = 48, b = 18;
    printf("%d 和 %d 的最大公约数是: %d\n", a, b, gcd(a, b));
    
    return 0;
}
